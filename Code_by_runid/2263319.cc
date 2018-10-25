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
    Point& copy(Point& t)
    {
        _x = t._x;
        _y = t._y;
        return *this;
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
    double x()const
    {
        return _x;
    }
    double y()const
    {
        return _y;
    }
    void showSumOfPoint()const
    {
        cout<<setprecision(16)<<"In total : "<<ans<<" points."<<endl;
    }
    void show()const
    {
        cout<<setprecision(16)<<"Point["<< num <<"] : ("<<_x<<", "<<_y<<")"<<endl;
    }
    Point& inverse()
    {
        double t = _x;
        _x = _y;
        _y = t;
        return *this;
    }
    Point& inverse(const Point p)
    {
        _x = p._y;
        _y = p._x;
        return *this;
    }
    int isEqual(Point& p)const
    {
        if(p._x == _x && p._y == _y)
            return 1;
        return 0;
    }
};

void ShowPoint(const Point& p)
{
    cout<<setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    //Point p(x, y);
    cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    int l(0);
    char c;
    double a, b;
    Point p, q, pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            p.copy(pt[l].setPoint(a, b));
        if(a > b)
            p.copy(pt[l].setPoint(a, b).inverse());
        if(a < b)
            p.inverse(pt[l].setPoint(a, b));
        if(a < 0)
            q.copy(p).inverse();
        if(b < 0)
            q.inverse(p).copy(pt[l]);
        pt[l++].show();
        p.show();
    }
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].x(), y -= pt[i].y();
    pt[l].x(y), pt[l].y(x);
    q.copy(pt[l]).show();
    for(int i = 0; i <= l; i++)
        pt[i].show();
    cout<<"==========gorgeous separator=========="<<endl;
    const Point const_point(3, 3);
    const_point.show();
    for(int i = 0; i <= l; i++)
    {
        if(const_point.isEqual(pt[i]))
        {
            ShowPoint(const_point);
            ShowPoint(const_point.x(), const_point.y());
            ShowPoint(Point(const_point.x(), const_point.y()));
        }
    }
    const_point.showSumOfPoint();
}

/**************************************************************
	Problem: 1126
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

