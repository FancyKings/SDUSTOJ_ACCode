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

class Date {
public:
    friend class Person;
    int y, m, d;
    Date(int a, int b, int c): y(a), m(b), d(c) {
        cout << "Date " << y << "-" << m << "-" << d << " is created." << '\n';
    }
    ~Date() {
        cout << "Date " << y << "-" << m << "-" << d << " is erased." << '\n';
    }
    void show() {
        cout << y << "-" << m << "-" << d << '\n';
    }
};

class Person : public Date {
public:
    friend class Date;
    string name;
    Person(int a, int b, int c, string n = ""): Date(a, b, c), name(n) {
        cout << "Person " << name << " is created." << '\n';
    }
    ~Person() {
        cout << "Person " << name << " is erased." << '\n';
    }
    int getAge(Date& now) {
        int ans = now.y - y;
        return ans;
    }
    const string getName()const  {
        return name;
    }
    void show() {
        cout << name << "'s birthday is "
             << y << '-' << m << '-' << d << "." << '\n';
    }
};

int main()
{
    int y, m, d;
    string name;
    cin>>y>>m>>d>>name;
    Person person(y, m, d, name);
    person.show();
    cin>>y>>m>>d;
    Date now(y,m,d);
    cout<<"Now, "<<person.getName()<<" is "<<person.getAge(now)<<"."<<endl;
    return 0;
}

/**************************************************************
	Problem: 2100
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

