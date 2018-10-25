#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <functional>
#include <utility>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

class Employee {
public:
    string name;
    int base, up;
    Employee(string n, int b = 0): name(n), base(b) {};
    virtual void print() = 0;
    virtual ~Employee() {};
};

class Sales: public Employee {
public:
    int tc;
    Sales(string name, int fb, int fr): Employee(name, fb), tc(fr) {};
    LL A() {
        return (tc + base) * 12;
    }
    void print() {
        cout << "Sales " << name << " : " << A() << '\n';
    }
    ~Sales() {};
};

class Manager: public Employee {
public:
    int tc;
    Manager(string name, int fb, int fr): Employee(name, fb), tc(fr) {};
    LL A() {
        return (base * 12 + tc);
    }
    void print() {
        cout << "Manager " << name << " : " << A() << '\n';
    }
    ~Manager() {};
};

class SalesManager: public Employee {
public:
    int tc, al;
    SalesManager(string name, int fb, int fr, int all): Employee(name, fb), tc(fr), al(all) {};
    LL A() {
        return (base + tc) * 12 + al;
    }
    void print() {
        cout << "SalesManager " << name << " : "  << A() << '\n';
    }
    ~SalesManager() {};
};

int main()
{
    string label, name;
    Employee* p[100];
    int n;
    int base, royalty, bonus;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> label >> name;
        if(label == "Sales")
        {
            cin >> base >> royalty;
            p[i] = new Sales(name, base, royalty);
        }
        if(label == "Manager")
        {
            cin >> base >> bonus;
            p[i] = new Manager(name, base, bonus);
        }
        if(label == "SalesManager")
        {
            cin >> base >> royalty >> bonus;
            p[i] = new SalesManager(name, base, royalty, bonus);
        }
    }
    for(int i = 0; i < n; i++)
        p[i]->print();
    for(int i = 0; i < n; i++)
        delete p[i];
}

/**************************************************************
	Problem: 2106
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

