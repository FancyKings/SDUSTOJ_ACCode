#include <bits/stdc++.h>
using namespace std;

class STR {
public:
	char * s;
	int len;
	STR() {
		s = NULL;
		len = 0;
	}
	STR(const char* a) {
		const char* t = a;
		int l = 0;
		while (*t != 0) {
			l++;
			t++;
		}
		s = new char[l * 2];
		len = l;
		for (int i = 0; i <= len; i++) {
			s[i] = a[i];
		}
		s[len] = 0;
	}
	int length() {
		return len;
	}
	void putline() {
		for (int i = 0; i < len; i++) {
			cout << s[i];
		}
		cout << endl;
		return;
	}
	STR operator + (STR a) {
		int l = len + a.len;
		STR ans;
		ans.s = new char[l * 2];
		int i;
		for (i = 0; i < len; i++) {
			ans.s[i] = s[i];
		}
		for (; i <= l; i++) {
			ans.s[i] = a.s[i - len];
		}
		ans.s[l] = 0;
		ans.len = l;
		return ans;
	}
	STR operator += (STR a) {
		STR ans;
		int l = len + a.len;
		ans.s = new char[l * 2];
		int i;
		for (i = 0; i < len; i++) {
			ans.s[i] = s[i];
		}
		for (; i <= l; i++) {
			ans.s[i] = a.s[i - len];
		}
		ans.s[l] = 0;
		s = new char[l * 2];
		for (int i = 0; i <= l; i++) {
			s[i] = ans.s[i];
		}
		this->len = l;
		return *this;
	}
};



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
	Time:32 ms
	Memory:2232 kb
****************************************************************/

