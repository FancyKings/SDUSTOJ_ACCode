#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
    int h,m,s;
public:
    Time():h(0),s(0),m(0) {};
    Time(int hh,int mm,int ss)
    {
        h = hh;
        s = ss;
        m = mm;
    }
    Time(const Time& T)
    {
        h = T.hour();
        m = T.minute();
        s = T.second();
        cout << "There was a call to the copy constructor : "
        <<h << "," << m << "," << s << endl;
    }
    Time& inputTime()
    {
        cin >> h >> m >> s;
        return *this;
    }

    void showTime()
    {
        cout
                << setw(2) << setfill('0') << h << ':'
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
    Time& setTime(int a,int b,int c)
    {
        h = a,m = b,s = c;
        return *this;
    }
    Time& setTime(const Time& T)
    {
        h = T.hour();
        m = T.minute();
        s = T.second();
        return *this;
    }
    Time& getTime()
    {
        return *this;
    }
};



int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2476 ms
	Memory:1268 kb
****************************************************************/

