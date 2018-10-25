#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Point {
private:
    double a,b;
public:
    Point(double x = 0,double y = 0):a(x),b(y){};
    double show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
    }
    ~Point(){};
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
    q.show();
}
/**************************************************************
	Problem: 1121
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

