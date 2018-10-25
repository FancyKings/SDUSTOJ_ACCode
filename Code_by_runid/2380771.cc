#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    double x , y;
public:
    Point(double a = 0, double b = 0)
    {
        x = a;
        y = b;
        //cout << "2D Point (" << x << "," << y << ")" << endl;
    }
    void showPoint()
    {
        cout << "2D Point (" << x << "," << y << ")" << endl;
    }
};

class Point_3D:public Point
{
public:
    double z;
    Point t;
public:
    Point_3D(double a,double b,double c = 0):t(a,b),z(c)
    {    }
    void showPoint()
    {
        cout << "3D Point (" << t.x << "," << t.y << "," << z << ")" << endl;
    }
};

int main()
{
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
}

/**************************************************************
	Problem: 1571
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

