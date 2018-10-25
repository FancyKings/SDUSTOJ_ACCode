#include <iostream>
#include <algorithm>
#include <iomanip>

using std::cout;
using std::cin;
using std::setprecision;
using std::endl;
int ans = 0;

class Point
{
private:
    double _x,_y;
    int num;
public:
    Point(double x)
    {
        _x = x,_y = x;
        ans++,num = ans;
    }
    Point(double x,double y)
    {
        _x = x,_y = y;
        ans++,num = ans;
    }
    Point()
    {
        _x = 0;
        _y = 0;
        ans++;
        num = ans;
    }
    Point& setPoint(double a,double b)
    {
        _x = a,_y = b;
        return *this;
    }
    Point(Point& t)
    {
        _x = t._x;
        _y = t._y;
        ans++;
        num = ans;
    }
    double setY(double t)
    {
        return _y = t;
    }
    double setX(double t)
    {
        return _x = t;
    }
    double getX()
    {
        return _x;
    }
    double getY()
    {
        return _y;
    }
    double y(double t)
    {
        _y = t;
        return t;
    }
    double x(double t)
    {
        _x = t;
        return t;
    }
    double x()
    {
        return _x;
    }
    double y()
    {
        return _y;
    }
    void showSumOfPoint()
    {
        cout<<setprecision(16)<<"In total : "<<ans<<" points."<<endl;
    }
    void show()
    {
        cout<<setprecision(16)<<"Point["<< num <<"] : ("<<_x<<", "<<_y<<")"<<endl;
    }
};

void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}

/**************************************************************
	Problem: 1125
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

