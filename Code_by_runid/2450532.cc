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

class Vehicle {
public:
    int num;
    Vehicle(int n): num(n) {
        cout << "Vehicle has " << n << " wheels is created." << '\n';
    };
    virtual ~Vehicle() {
        cout << "Vehicle has " << num << " wheels is erased." << '\n';
    };
};

class Bus: public Vehicle {
public:
    int guest;
    Bus(int t, int a): guest(a), Vehicle(t) {
        cout << "Bus which can carry " << guest << " persons is created." << '\n';
    };
    ~Bus() {
        cout << "Bus which can carry " << guest << " persons is erased." << '\n';
    };
};

class Truck: public Vehicle {
public:
    int weight;
    Truck(int w, int a): weight(a), Vehicle(w) {
        cout << "Truck which can carry " << weight << " tons goods is created." << '\n';
    };
    ~Truck() {
        cout << "Truck which can carry " << weight << " tons goods is created." << '\n';
    }
};

int main()
{
    int w, g;
    char t;
    Vehicle *veh;
    while (cin>>w>>t>>g)
    {
        if (t == 'b')
        {
            veh = new Bus(w, g);
        }
        else
        {
            veh = new Truck(w, g);
        }
        delete veh;
    }
    return 0;
}

/**************************************************************
	Problem: 2102
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

