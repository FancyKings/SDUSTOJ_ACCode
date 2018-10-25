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
    Time& inputTime()
    {
        cin >> h >> m >> s;
        return *this;
    }
};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
        t.inputTime().showTime();
}

/**************************************************************
	Problem: 1387
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2520 ms
	Memory:1268 kb
****************************************************************/

