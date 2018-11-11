#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>

#define timespec JGFHDFHDJKFDF
#include <iomanip>

typedef long long LL;
using namespace std;

class Base {
public:
    int v;
    int flag;
    Base(int b): v(b) {
        flag = 1;
        cout << "Base = " << v << " is created." << endl;
    };
    Base(): v(0) {
        flag = 0;
        // cout << "Base = " << v << " is created." << endl;
    };

    ~Base() {
        if (flag)
            cout << "Base = " << v << " is erased." << endl;
    }
    Base(Base& B): v(B.v), flag(B.flag) {
        cout <<  "Base = " << v << " is copied." << endl;
    }
};

class Derived: public Base {
public:
    Base b;
    int v;
    Derived(int a = 0, int c = 0):  b(a), v(c) {
        cout << "Derived = " << v << " is created." << endl;
    }
    ~Derived() {
        cout << "Derived = " << v << " is erased." << endl;
    }
    Derived(Derived& D) : b(D.b), v(D.v) {
        cout << "Derived = " << v << " is copied." << endl;
    }
};
int main()
{
    int cases, data1, data2;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>data1>>data2;
        Base base1(data1), base2(base1);

        Derived derived1(data1, data2), derived2(derived1);
    }
}
/**************************************************************
	Problem: 1814
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

