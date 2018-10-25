#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    double x_ , y_;
    static int n;
public:
    Point(double a = 0, double b = 0):x_(a),y_(b)
    {
        n++;
        //cout << "2D Point (" << x << "," << y << ")" << endl;
    }
    void showPoint()
    {
        cout << "2D Point (" << x_ << "," << y_ << ")" << endl;
    }
    const int x()const
    {
        return x_;
    }
    const int y()const
    {
        return y_;
    }
    int x(int a)
    {
        x_ = a;
        return x_;
    }
    int y(int a)
    {
        y_ = a;
        return y_;
    }
    static int showNumber()
    {
        return Point::n;
    }
    //~Point(){n--;};
};

int Point::n = 0;

class Point_3D:public Point
{
public:
    double z_;
    static int ny;
public:
    Point_3D(double a = 0,double b = 0,double c = 0):Point(a,b),z_(c)
    {  ny++;  }
    void showPoint()
    {
        cout << "3D Point (" << x_ << "," << y_ << "," << z_ << ")" << endl;
    }
    const int z()const
    {
        return z_;
    }
    int z(int a)
    {
        z_ = a;
        return z_;
    }
    void setPoint(double a,double b,double c)
    {
        x(a), y(b),z(c);
        //n++;
    }
    static int showNumber()
    {
        return ny;
    }
    //~Point_3D(){ny--;};
};

int Point_3D::ny = 0;


int main()
{
    cout<<"Invariable test output :"<<endl;
    Point_3D p3d;
    p3d.setPoint(-100, 0, 100);
    p3d.showPoint();
    p3d.x(0);
    p3d.y(100);
    cout<<"Point ("<<p3d.x()<<","<<p3d.y()<<","<<p3d.z()<<")"<<endl;
    cout<<"\nTest data output :"<<endl;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double x, y, z;
        int point_type;
        cin>>point_type;
        if(point_type == 2)
        {
            cin>>x>>y;
            Point p(x, y);
            p.showPoint();
        }
        if(point_type == 3)
        {
            cin>>x>>y>>z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
    cout<<"Number of 2D Points : "<<Point::showNumber() - Point_3D::showNumber()<<endl;
    cout<<"Number of 3D Points : "<<Point_3D::showNumber() - 1<<endl;
}

/**************************************************************
	Problem: 1393
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

