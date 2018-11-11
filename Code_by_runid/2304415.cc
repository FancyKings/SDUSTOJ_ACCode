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
    Time():h(0),s(0),m(0)
    {
        all++;
    };
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
        //cout << "There was a call to the copy constructor : "
        //<< h <<',' << m << ',' << s << endl;
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
    friend istream& operator>>(istream& a,Time& t)
    {
        a >> t.h >> t.m >> t.s;
        return a;
    }
    friend ostream& operator<<(ostream& a,const Time& t)
    {
        if(t.h < 24 && t.h > -1 && t.m < 60 && t.m > -1 && t.s > -1 && t.s < 60)
            cout
                    << setw(2) << setfill('0') << t.h << ':'
                    << setw(2) << setfill('0') << t.m << ':'
                    << setw(2) << setfill('0') << t.s ;
        else
            cout << "error!!!" ;
        return a;
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
    Time& operator += (int t)
    {
        if(h < 24 && h > -1 && m < 60 && m > -1 && s > -1 && s < 60)
        {
            int temp = (h * 3600 + m * 60 + s + t)%(24*3600);
            h = temp / 3600;
            m = (temp - h * 3600) / 60;
            s = (temp - h * 3600 - m * 60);
        }
        return *this;
    }
    Time& operator -= (int t)
    {
        if(h < 24 && h > -1 && m < 60 && m > -1 && s > -1 && s < 60)
        {
            int temp = (h * 3600 + m * 60 + s - t + 24 * 3600)%(24*3600);
            h = temp / 3600;
            m = (temp - h * 3600) / 60;
            s = (temp - h * 3600 - m * 60);
        }
        return *this;
    }
    Time operator ++()
    {
        Time t(*this);
        t += 1;
        return t;
    }
    Time operator ++(int)
    {
        Time t(*this);
        *this += 1;
        return t;
    }
    Time operator --()
    {
        Time t(*this);
        t -= 1;
        return *this;
    }
    Time operator --(int)
    {
        Time t(*this);
        *this -= 1;
        return t;
    }
};

int Time::all = 0;


int main()
{
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}

/**************************************************************
	Problem: 1396
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:84 ms
	Memory:1272 kb
****************************************************************/

