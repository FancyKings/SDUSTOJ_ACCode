#include<bits/stdc++.h>
using namespace std;
class Date
{
public:
    int y,m,d;
    Date():y(1),m(1),d(1){}
    Date(int y,int m,int d):y(y),m(m),d(d){}
    void showDate()
    {
        printf("%04d-%02d-%02d",y,m,d);
    }
    Date &setDate(int a, int b,int c)
    {
        y=a;
        m=b;
        d=c;
        return *this;
    }
    ~Date(){}
};
class Time
{public:

    int ho,mi,se;
    Time():ho(0),mi(0),se(0){}
    Time(int a,int b,int c):ho(a),mi(b),se(c){}
    void showTime()
    {
        printf("%02d:%02d:%02d",ho,mi,se);
    }
    Time &setTime(int x,int y,int z)
    {
        ho=x;
        mi=y;
        se=z;
        return *this;
    }
    ~Time(){}
};
class DateTime
{
public:


    int y,m,d,ho,mi,se;
    DateTime():y(1),m(1),d(1),ho(0),mi(0),se(0){}
    DateTime(const Date&d1,const Time&t1)
    :y(d1.y),m(d1.m),d(d1.d),ho(t1.ho),mi(t1.mi),se(t1.se){}
    DateTime(int a,int b,int c,int x,int y,int z)
        :y(a),m(b),d(c),ho(x),mi(y),se(z){}
    void showDateTime()
    {
        printf("%04d-%02d-%02d %02d:%02d:%02d",y,m,d,ho,mi,se);
    }
    DateTime& setDateTime(int a,int b,int c,int x,int t,int z)
    {
        y=a,m=b,d=c,ho=x,mi=t,se=z;
        return *this;
    }
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
	Time:1248 ms
	Memory:1268 kb
****************************************************************/

