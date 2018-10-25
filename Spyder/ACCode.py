# -*- coding:utf-8 -*-
import requests  # 导入requests模块 用于：发送请求
import html      # 导入html模块 用于：反转义HTML文本
from bs4 import BeautifulSoup  # 导入BeautifulSoup模块 用于：解析response

# OJ代码爬虫--集成一个类
class CodeSpider(object):
    # 初始化方法 定义属性 包括 url 浏览器标识以及cookies
    def __init__(self, header, cookies):
        self.header = header
        self.cookies = cookies
        self.url_base = "http://cise.sdust.edu.cn/OJ/"
        self.check = ''

# 请求函数 用于：发送请求
# 定义一个入口URL作为默认属性
    def request(self, url='http://cise.sdust.edu.cn/OJ/status.php?user_id=*****&jresult=4&top=*****'):
        got_response = requests.get(url, self.header, cookies=self.cookies)
        # 调用analyze函数
        self.analyze(got_response)

    # 解析函数 用于：解析response
    # 函数接受request函数接受到的响应
    def analyze(self, got_response):
        # 使用Beautifulsoup模块进行解析
        analyzed = BeautifulSoup(got_response.text, 'lxml')
        # 从解析后的数据中先寻找标签<table align='center'>
        # 接着寻找其中的标签<a target='_blank'> 得到代码URL列表
        wanted_list = analyzed.find('table', align='center').find_all('a', target="_blank")
        # 初始化用于判断是否抓取完毕的ｎａｍｅ变量
        name = ''
        # 遍历代码URL列表，准备抓取代码
        for items in wanted_list:
            # 获取属性字段（即代码URL）
            attribute = items['href']
            print("attribute " + attribute)
            # 构造文件名
            name = attribute[-7:]
            # 构造代码的链接
            code_url = self.url_base+attribute
            # 对代码URL发送请求
            response = requests.get(code_url, self.header, cookies=self.cookies)
            # 解析响应
            analyzed_response = BeautifulSoup(response.text, 'lxml')
            # 从响应中取得代码（标签为<pre class='brush:c;'>
            code_list = analyzed_response.find('pre', class_='brush:c;')
            if not code_list:
                code_list = analyzed_response.find('pre', class_='brush:c++;')
            # 调用保存函数进行本地化存储
            self.save_file(name, code_list.get_text())
        # 构造下一个URL（即翻页）
        next_url = self.url_base+'status.php?user_id=*****&jresult=4&top='+name
        # 这里判断是否抓取完毕，因为如果到达了最后一页，self.check与name的值会相同
        if self.check == name:
            print(name)
            print("爬行完成！！")
            return
        # 如果不同，保存这次的name
        self.check = name
        print("next_url " + next_url)
        # 再次调用request函数继续爬取
        self.request(next_url)

# 保存函数 用于：本地化数据
    # 接受analyze函数解析出的代码和文件名
    def save_file(self, name, code_list):
        # 新建一个文件 打开方式为：追加
        file = open(name+'.cc', 'w', encoding = 'utf-8')
        print("file name : " + name)
        # 写入代码
        file.write(html.unescape(code_list))
        # 关闭文件 释放资源
        file.close()

header = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; LCTE; rv:11.0) like Gecko"}
cookies = {
            # 先在OJ上登录一下，获取浏览器的cookies，获取权限
           'PHPSESSID': '491cdcmcb0suf5j*************'
           }
pa = CodeSpider(header, cookies)
pa.request()
