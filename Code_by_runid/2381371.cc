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
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

class Vehicle
{
public:
	int num;
public:
	Vehicle(int n = 0): num(n)
	{
		cout << "Vehicle has " << num << " wheels is created." << endl;
	}
	virtual ~Vehicle()
	{
		cout << "Vehicle has " << num << " wheels is erased." << endl;
	}
};

class Bus:public Vehicle
{
public:
	int gue;
public:
	Bus(int n = 0, int m = 0): gue(m), Vehicle(n)
	{
		cout << "Bus which can carry " << gue << " persons is created." << endl;
	}
	virtual ~Bus()
	{
		cout << "Bus which can carry " << gue << " persons is erased." << endl;
	}
};

class Truck:public Vehicle
{
public:
	int w;
public:
	Truck(int n = 0, int m = 0): w(m), Vehicle(n)
	{
		cout << "Truck which can carry " << m << " tons goods is created." << endl;
	}
	virtual ~Truck()
	{
		cout << "Truck which can carry " << w << " tons goods is created." << endl;
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
	Time:4 ms
	Memory:1272 kb
****************************************************************/

