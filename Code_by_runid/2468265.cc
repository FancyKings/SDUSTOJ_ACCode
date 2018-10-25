#include <bits/stdc++.h>

using namespace std;

int IN(char a,char* b){
    char *t = b;
    while(*t != 0){
        if(*t == a){
            return 0;
        }
        t++;
    }
    return 1;
}

class MyString{
public:
    string s;
    void input(){
        cin >> s;
    }
    void output(){
        cout << s << endl;;
    }
    void del(char* t){
        char* b = t;
        string ans = "";
        int l = s.size();
        for(int i = 0;i < l; i++){
            if(IN(s[i],b) == 0){
                continue;
            }
            else{
                ans += s[i];
            }
        }
        s = ans;
    }
};
int main()
{
    MyString str;
    char tmp[11];
    str.input();
    str.output();
    cin>>tmp;
    str.del(tmp);
    str.output();
    return 0;
}

/**************************************************************
	Problem: 2095
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

