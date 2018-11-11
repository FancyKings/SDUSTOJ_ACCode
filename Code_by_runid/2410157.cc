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

class FlyThing
{
public:
	string name;
	double xx, yy;
	virtual void fly() = 0;
	FlyThing(string s = "", double a = 0, double b = 0): name(s), xx(a), yy(b) {};
	void show()
	{
		cout << name << " at " << xx << ' ' << yy << endl;
	}
};

class EnemyPlane: public FlyThing
{
public:
	EnemyPlane(string name, double x, double y) : FlyThing(name, x, y) {};
	void fly()
	{
		yy += 1;
	}
};

class MyPlane: public FlyThing
{
public:
	MyPlane(string name, double x, double y) : FlyThing(name, x, y) {};
	void fly()
	{
		char c;
		cin >> c;
		if (c == 'a' || c == 'A') xx--;
		else if (c == 's' || c == 'S') yy++;
		else if (c == 'w' || c == 'W') yy--;
		else if (c == 'd' || c == 'D') xx++;
	}
};

int main()
{
    FlyThing **planes;
    int numOfEnemplanes, i, x, y, numOfMoves, j;
    string str;
    cin>>numOfEnemplanes;
    planes = new FlyThing*[numOfEnemplanes + 1];
    planes[0] = new MyPlane("WUDI", 50, 50);
    for(i = 1; i <= numOfEnemplanes; i++)
    {
        cin>>str>>x>>y;
        planes[i] = new EnemyPlane(str, x, y);
    }

    for (j = 0; j < numOfEnemplanes + 1; j++)
    {
        planes[j]->show();
    }

    cin>>numOfMoves;
    for (i = 0; i < numOfMoves; i++)
    {
        for (j = 0; j < numOfEnemplanes + 1; j++)
        {
            planes[j]->fly();
            planes[j]->show();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 2060
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

