#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#define timespec A_A_A_A_
#include <iomanip>

typedef long long LL;
using namespace std;

class Date
{
    friend class Time;
    friend class DateTime;
private:
    int y, m, d;
public:
    Date():y(0),m(0),d(0){};
    Date(int a, int b, int c): y(a), m(b), d(c) {};
    void showDate()
    {
        cout << setfill('0') << setw(2) << y << '-'
             << setfill('0') << setw(2) << m << '-'
             << setfill('0') << setw(2) << d;
    }
};

class Time
{
    friend class Date;
    friend class DateTime;
private:
    int h, m, s;
public:
    Time():h(0),m(0),s(0){};
    Time(int x, int y, int z): h(x), m(y), s(z) {};
    void showTime()
    {
        cout << setfill('0') << setw(2) << h << ':'
             << setfill('0') << setw(2) << m << ':'
             << setfill('0') << setw(2) << s;
    }
};


class DateTime
{
private:
    Date d;
    Time t;
public:
    DateTime():d(0,0,0),t(0,0,0){};
    DateTime(const Date& dd,const Time& tt):d(dd),t(tt){};
    DateTime(int q,int w,int e,int r,int tt,int y):d(q,w,e),t(r,tt,y){};
    void showDateTime()
    {
        d.showDate();
        cout << ' ';
        t.showTime();
    }
    DateTime& setDateTime(int q,int w,int e,int r,int tt,int y)
    {
        d.y = q,d.m = w,d.d = e;
        t.h = r,t.m = tt,t.s = y;
        return *this;
    };
};


int main()
{
    Date date(1000, 10, 10);
    Time time(1, 1, 1);
    DateTime date_time(date, time);
    date_time.showDateTime();
    cout << endl;
    int cases, flag = 0;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        if(flag == 0)
        {
            flag = 1;
            DateTime dt(year, month, day, hour, minute, second);
            dt.showDateTime();
        }
        else if(flag == 1)
        {
            flag == 0;
            date_time.setDateTime(year, month, day, hour, minute, second).showDateTime();
        }
        cout << endl;
    }
}

/**************************************************************
	Problem: 1575
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:1236 ms
	Memory:1268 kb
****************************************************************/

