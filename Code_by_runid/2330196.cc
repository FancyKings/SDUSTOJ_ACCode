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
    Date():y(1),m(1),d(1)
    {
        cout << "CREATE Date : (" << y << ", " << m << ", " << d << ")" << endl;
    };
    Date(int a, int b, int c): y(a), m(b), d(c)
    {
        cout << "CREATE Date : (" << y << ", " << m << ", " << d << ")" << endl;
    };
    Date(const Date& D)
    {
        y = D.y,m= D.m,d = D.d;
        cout << "COPY   Date : (" << y << ", " << m << ", " << d << ")" << endl;
    }
    void showDate()
    {
        cout << setfill('0') << setw(4) << y << '-'
             << setfill('0') << setw(2) << m << '-'
             << setfill('0') << setw(2) << d;
    }
    void setDate(int a,int b,int c)
    {
        y = a,m = b,d = c;
    }
};

class Time
{
    friend class Date;
    friend class DateTime;
private:
    int h, m, s;
public:
    Time():h(0),m(0),s(0)
    {
        cout << "CREATE Time : (" << h << ", " << m << ", " << s << ")" << endl;
    };
    Time(int x, int y, int z): h(x), m(y), s(z)
    {
        cout << "CREATE Time : (" << h << ", " << m << ", " << s << ")" << endl;
    };
    Time(const Time& T)
    {
        h = T.h,m = T.m,s = T.s;
        cout << "COPY   Time : (" << h << ", " << m << ", " << s << ")" << endl;
    }
    void showTime()
    {
        cout << setfill('0') << setw(2) << h << ':'
             << setfill('0') << setw(2) << m << ':'
             << setfill('0') << setw(2) << s;
    }
    void setTime(int a,int b,int c)
    {
        h = a,m = b,s = c;
    }
};


class DateTime
{
    friend class Date;
    friend class Time;
private:
    Time t;
    Date d;
public:
    DateTime():d(1,1,1),t(0,0,0)//()
    {
        cout << "CREATE DateTime : ("
             << d.y << ", "
             << d.m << ", "
             << d.d << ", "
             << t.h << ", "
             << t.m << ", "
             << t.s << ")" << endl;
    };
    DateTime(const Date& dd,const Time& tt):d(dd),t(tt)//()()
    {
        cout << "CREATE DateTime : ("
             << d.y << ", "
             << d.m << ", "
             << d.d << ") ("
             << t.h << ", "
             << t.m << ", "
             << t.s << ")" << endl;
    };
    DateTime(int q,int w,int e,int r,int tt,int y):d(q,w,e),t(r,tt,y)//()
    {
        cout << "CREATE DateTime : ("
             << d.y << ", "
             << d.m << ", "
             << d.d << ", "
             << t.h << ", "
             << t.m << ", "
             << t.s << ")" << endl;
    };
    DateTime(const DateTime& DT):t(DT.t),d(DT.d)//()()
    {
        cout << "COPY   DateTime : ("
             << d.y << ", "
             << d.m << ", "
             << d.d << ") ("
             << t.h << ", "
             << t.m << ", "
             << t.s << ")" << endl;
    }
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
    const int year()const
    {
        return d.y;
    }
    const int month()const
    {
        return d.m;
    }
    const int day()const
    {
        return d.d;
    }
    const int hour()const
    {
        return t.h;
    }
    const int minute()const
    {
        return t.m;
    }
    const int second()const
    {
        return t.s;
    }
    int year(int temp)
    {
        d.y = temp;
    }
    int month(int temp)
    {
        d.m = temp;
    }
    int day(int temp)
    {
        d.d = temp;
    }
    int hour(int temp)
    {
        t.h = temp;
    }
    int minute(int temp)
    {
        t.m = temp;
    }
    int second(int temp)
    {
        t.s = temp;
    }
};



int main()
{
    const Date date(1000, 10, 10), dt(date);
    const Time time(1, 1, 1), tm(time);
    DateTime date_time(dt, tm);
    const DateTime cnt(date_time);
    cout << "DateTime : " << cnt.year() << " " << cnt.month() << " " << cnt.day();
    cout << " " << cnt.hour() << " " << cnt.minute() << " " << cnt.second();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.year(year);
        date_time.month(month);
        date_time.day(day);
        date_time.hour(hour);
        date_time.minute(minute);
        date_time.second(second);
        date_time.showDateTime();
        cout << endl;
    }
}
/**************************************************************
	Problem: 1577
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:1220 ms
	Memory:1272 kb
****************************************************************/

