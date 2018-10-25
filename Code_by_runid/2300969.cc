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
};


int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}

/**************************************************************
	Problem: 1385
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2540 ms
	Memory:1268 kb
****************************************************************/

