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
	int l, si;
public:
	STR(): l(0), si(0), s(NULL) {};
	STR(const char* t)
	{
		l = 0;
		while (t[l] != 0)
		{
			l++;
		}
		si = l * 2;
		s = new char[si];
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
	friend STR operator + (const STR& a, const STR& b)
	{
		STR New;
		New.l = a.l + b.l;
		New.si = a.si + b.si;
		New.s = new char[New.si];
		int i = 0;
		for (; i < a.l; i++)
		{
			New.s[i] = a.s[i];
		}
		for (int j = i; j <= i + b.l; j++)
		{
			New.s[j] = b.s[j - a.l];
		}
		return New;
	}
	STR& operator += (const STR& a)
	{
		int len = l + a.l;
		si = len * 2;
		char *New = new char[si];
		for (int i = 0; i < l; i++)
		{
			New[i] = s[i];
		}
		for (int i = l; i <= len; i++)
		{
			New[i] = a.s[i - l];
		}
		delete [] s;
		s = New;
		l = len;
		return *this;
	}
};



//------------------------------


int main()
{
    STR e;
    STR h("Hello World!");
    STR he = e + h;
    cout << he.length() << " ";
    he.putline();
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    e += h;
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();

    char s1[100001], s2[100001];
    while(gets(s1) != NULL && gets(s2) != NULL)
    {
        STR str1(s1), str2(s2);
        STR str = str1 + str2;
        cout << str.length() << " ";
        str.putline();
        cout << str1.length() << " ";
        str1.putline();
        cout << str2.length() << " ";
        str2.putline();
        str2 += str1;
        cout << str2.length() << " ";
        str2.putline();
        cout << str1.length() << " ";
        str1.putline();
    }
}

/**************************************************************
	Problem: 1579
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:2020 kb
****************************************************************/

