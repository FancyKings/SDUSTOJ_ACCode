#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Point
{
private:
    double a,b;
public:
    Point(int t):a(t),b(t){
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
    Point(const Point & t)
    {
        a = t.a,b = t.b;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<") is copied."<<endl;
    }
};

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
    }
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}
/**************************************************************
	Problem: 1122
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

