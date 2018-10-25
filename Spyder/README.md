# 使用方法
+ 先在OJ上正常登录自己的OJ账号，然后得到cookies，把PHPSESSID换成自己的新的
+ 更改文件中的 星号  表示的内容即可
+ 运行即可
+ 有一点要注意，爬下来的文件为了兼容在本地使用了UTF-8编码，但是在Win下采取的换行符和Unix不同，上传文件会出现代码结构松散或者结尾出现 ^M 的情况，如果出现，请做下列操作：
	+ git config --globle core.autocrlf false
	+ git config --globle core.safecrlf true
	+ dos2unix filename
	+ 经过上述修改再去上传，实测可以解决换行符编码不同的问题
+ 唉~， 要是经过了上述还不行，那就真的把文件全删除了，再在源处转完格式再cp过来

+ 上个删了的仓库试了好久才找到问题，好几十个commits, 痛苦啊~

