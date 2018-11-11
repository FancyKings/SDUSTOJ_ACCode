#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

class Time{
public:
    int h,m,s;
    Time(int a = 0,int b = 0,int c = 0):h(a),m(b),s(c){};
    LL operator - (Time T){
        LL ans = 0;
        ans = (h*3600+m*60+s) - (T.h*3600+T.m*60+T.s);
        return (ans>=0)?(ans):(-ans);
    }
};
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    Time t1(a, b, c);
    cin>>a>>b>>c;
    Time t2(a, b, c);
    cout<<"Deference is "<<(t2 - t1)<<" seconds."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2215
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

