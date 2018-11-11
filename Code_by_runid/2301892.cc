#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
    int h,m,s;
    static int all;
public:
    static void displayNumber()
    {
        cout << "Now, There is " << getNumber() << " object of Time." <<endl;
    }
    Time():h(0),s(0),m(0) {all++;};
    Time(int hh,int mm,int ss)
    {
        all++;
        h = hh;
        s = ss;
        m = mm;
    }
    Time(const Time& T)
    {
        all++;
        h = T.hour();
        m = T.minute();
        s = T.second();
        cout << "There was a call to the copy constructor : "
        << h <<',' << m << ',' << s << endl;
    }
    Time& inputTime()
    {
        cin >> h >> m >> s;
        return *this;
    }
    static int getNumber()
    {
        return all;
    }
    const void showTime()const
    {
        if(h < 24 && h > -1 && m < 60 && m > -1 && s > -1 && s < 60)
            cout
                << setw(2) << setfill('0') << h << ':'
                << setw(2) << setfill('0') << m << ':'
                << setw(2) << setfill('0') << s << endl;
        else
            cout << "Time error" << endl;
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
    const Time& getTime()const
    {
        return *this;
    }
    const void showTime12Hour()const
    {
        int th = h / 12;
        if(h < 24 && h > -1 && m < 60 && m > -1 && s > -1 && s < 60)
        {
            if(!th)
            {
            cout
                << setw(2) << setfill('0') <<
                 ((h==0)?(h+12):(h))
                << ':'
                << setw(2) << setfill('0') << m << ':'
                << setw(2) << setfill('0') << s << " a.m." << endl;
            }
            else
            {
            cout
                << setw(2) << setfill('0') <<
                 ((h > 12)?(h -12):(h))
                << ':'
                << setw(2) << setfill('0') << m << ':'
                << setw(2) << setfill('0') << s << " p.m." << endl;
            }
        }
        else
            cout << "Time error" << endl;
    }
};

int Time::all = 0;



int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}

/**************************************************************
	Problem: 1392
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2512 ms
	Memory:1268 kb
****************************************************************/

