#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Point
{
private:
    double a,b;
    static int cnt;
    static int ans;

public:
    Point():a(0),b(0){ans++,cnt++;};
    Point(int t):a(t),b(t)
    {
        cnt+=1;
        ans+=1;
    };
    Point(double x,double y):a(x),b(y)
    {
        cnt+=1;
        ans+=1;
    };
    Point(const Point& t)
    {
        cnt+=1;
        ans+=1;
        a = t.a,b = t.b;
    }
    ~Point()
    {
        cnt-=1;
    };
    double show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
    }
    static void showCounter()
    {
        cout<<setprecision(16)<<"Current : "<<cnt<<" points."<<endl;
    }
    static void showSumOfPoint()
    {
        cout<<setprecision(16)<<"In total : "<<ans<<" points."<<endl;
    }
};

int Point::cnt = 0;
int Point::ans = 0;

double showPoint(Point& a,Point& b,Point& c)
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
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
/**************************************************************
	Problem: 1124
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

