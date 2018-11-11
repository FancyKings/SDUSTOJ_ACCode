#include <bits/stdc++.h>

using namespace std;

multiset<int,greater<int> > a;

class Base
{
private:
    int v;
public:
    Base():v(0){};
    Base(const Base& t){
        v = t.v;
        cout << "Base = " << t.v << " is copied." << endl;
    }
    Base(int t):v(t){
        cout << "Base = " << v << " is created." << endl;
    }
    ~Base(){
        cout << "Base = " << v << " is erased." << endl;
    }
};


class Derived: public Base
{
private:
    int v;
public:
    Derived():v(0){};
    Derived(int t):Base(t){
        cout << "Derived = " << v << " is created." << endl;
    };
    Derived(int a,int b):Base(a),v(b){
        cout << "Derived = " << v << " is created." << endl;
    }
    ~Derived(){
        cout << "Derived = " << v << " is erased." << endl;
    }
    Derived(const Derived& d):Base(d),v(d.v){
        cout << "Derived = " << v << " is copied." <<endl;
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
	Memory:1272 kb
****************************************************************/

