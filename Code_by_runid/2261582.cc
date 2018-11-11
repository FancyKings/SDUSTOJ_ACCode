#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Point
{
private:
    double a,b;
public:
    Point(int t):a(t),b(t)
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<") is created."<<endl;
    };
    Point(double x = 0,double y = 0):a(x),b(y)
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<") is created."<<endl;
    };
    ~Point()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<") is erased."<<endl;
    };
    double show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
    }
    Point(Point& t)
    {
        a = t.a,b = t.b;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<") is copied."<<endl;
    }

};

double showPoint(Point a,Point b,Point c)
{
    a.show();
    b.show();
    c.show();
}
double showPoint(Point a)
{
    a.show();
}

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        showPoint(p);
    }
    Point q1(q), q2(1);
    showPoint(q1, q2, q);
}
/**************************************************************
	Problem: 1123
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

