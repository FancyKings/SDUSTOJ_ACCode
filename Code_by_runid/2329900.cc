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
private:
	int y, m, d;
public:
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
private:
	int h, m, s;
public:
	Time(int x, int y, int z): h(x), m(y), s(z) {};
	void showTime()
	{
		cout << setfill('0') << setw(2) << h << ':'
		     << setfill('0') << setw(2) << m << ':'
		     << setfill('0') << setw(2) << s;
	}
};

int main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1574
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2320 ms
	Memory:1268 kb
****************************************************************/

