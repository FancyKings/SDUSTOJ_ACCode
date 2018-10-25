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
    Date():y(1),m(1),d(1){
        cout << "CREATE Date : (" << y << ", " << m << ", " << d << ")" << endl;
    };
    Date(int a, int b, int c): y(a), m(b), d(c) {
        cout << "CREATE Date : (" << y << ", " << m << ", " << d << ")" << endl;
    };
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
    Time():h(0),m(0),s(0){
        cout << "CREATE Time : (" << h << ", " << m << ", " << s << ")" << endl;
    };
    Time(int x, int y, int z): h(x), m(y), s(z) {
        cout << "CREATE Time : (" << h << ", " << m << ", " << s << ")" << endl;
    };
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
private:
    Time t;
    Date d;
public:
    DateTime():d(1,1,1),t(0,0,0){
        cout << "CREATE DateTime : (" << d.y << ", " << d.m << ", " << d.d << ", " << t.h << ", " << t.m << ", " << t.s << ')' << endl;
    };
    DateTime(const Date& dd,const Time& tt):d(dd),t(tt){};
    DateTime(int q,int w,int e,int r,int tt,int y):d(q,w,e),t(r,tt,y){
        cout << "CREATE DateTime : (" << d.y << ", " << d.m << ", " << d.d << ", " << t.h << ", " << t.m << ", " << t.s << ')' << endl;
    };
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
    DateTime date_time;
    date_time.showDateTime();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.setDateTime(year, month, day, hour, minute, second);
        date_time.showDateTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1576
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:1212 ms
	Memory:1268 kb
****************************************************************/

