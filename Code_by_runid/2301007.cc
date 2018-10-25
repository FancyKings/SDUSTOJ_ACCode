#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
    int h,m,s;
public:
    Time():h(0),s(0),m(0){};
    Time(int hh,int mm,int ss)
    {
        h = hh;
        s = ss;
        m = mm;
    }
    void showTime()
    {
        cout
        << setw(2) << setfill('0')<< h << ':'
        << setw(2) << setfill('0') << m << ':'
        << setw(2) << setfill('0') << s << endl;
    }
    const int hour()const
    {
        return h;
    }
    const int minute()const
    {
        return m;
    }
    const int second()const
    {
        return s;
    }
    void hour(int a)
    {
        h = a;
    }
    void minute(int a)
    {
        m = a;
    }
    void second(int a)
    {
        s = a;
    }
};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout<<setw(2)<<setfill('0')<<t.hour()<<":";
        cout<<setw(2)<<setfill('0')<<t.minute()<<":";
        cout<<setw(2)<<setfill('0')<<t.second()<<endl;
    }
}

/**************************************************************
	Problem: 1386
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2480 ms
	Memory:1268 kb
****************************************************************/

