#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long LL;

class Time{
public:
    friend class Alarm;
    int h,m,s;
    Time(int hh = 0,int mm = 0,int ss = 0):h(hh),m(mm),s(ss){
        cout << "Time " << h << ":" << m << ":" << s << " is created." << endl;
    };
    ~Time(){
        cout << "Time " << h << ":" << m << ":" << s << " is erased." << endl;
    };
};

class Alarm{
public:
    friend class Time;
    Time T;
    string S;
    Alarm(int h,int m,int s,string name):T(h,m,s),S(name){
        cout << "Alarm " << S << " is created." << endl;
    };
    int remainSeconds(Time& now){
        LL nows = now.h * 60 *60 + now.m * 60 + now.s;
        LL tos = T.h * 60 *60 + T.m * 60 + T.s;
        return (int)(tos - nows);
    }
    string getThing(){
        return S;
    }
    ~Alarm(){
        cout << "Alarm " << S << " is erased." << endl;
    }
};
int main()
{
    int h, m, s;
    string th;
    cin>>th;
    cin>>h>>m>>s;
    Alarm alarm(h,m,s,th);
    cin>>h>>m>>s;
    Time now(h,m,s);
    cout<<"Alarm "<<alarm.getThing()<<" will start after "<<alarm.remainSeconds(now)<<" seconds."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2090
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

