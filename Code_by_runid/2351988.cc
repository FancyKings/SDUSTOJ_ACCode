#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

class STR
{
private:
	char * s;
	int l;
public:
	STR(): l(0) {};
	STR(const char* t)
	{
		l = 0;
		while (t[l] != 0)
		{
			l++;
		}
		s = new char[l * 2];
		for (int i = 0; i < l ; i++)
		{
			s[i] = t[i];
		}
		s[l] = 0;
	}
	~STR()
	{
		if (l)
		{
			delete []s;
		}
	}
	const int length()const
	{
		return l;
	}
	void putline()
	{
		if (l)
		{
			cout << s;
		}
		cout << endl;
	}
};

int main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}

/**************************************************************
	Problem: 1578
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1480 kb
****************************************************************/

