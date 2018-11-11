#include <bits/stdc++.h>
using namespace std;

class Point
{
    friend class Line;
private:
    double x,y;
public:
    Point()
    {
        x = 0;
        y = 0;
        cout << "Point : (" << x << ", " << y << ") is created." << endl;
    }
    ~Point()
    {
        cout << "Point : (" << x << ", " << y << ") is erased." << endl;
    }
    void show()
    {
        cout << "Point : (" << x << ", " << y << ")" << endl;
    }
    Point(double xx,double yy)
    {
        x = xx;
        y = yy;
        cout << "Point : (" << x << ", " << y << ") is created." << endl;
    }
    void setx(double xx)
    {
        x = xx;
    }
    void sety(double yy)
    {
        y = yy;
    }
    void setxy(double xx,double yy)
    {
        x = xx;
        y = yy;
    }
    double getx()const
    {
        return x;
    }
    double gety()const
    {
        return y;
    }
    Point(const Point& p)
    {
        x = p.x;
        y = p.y;
        cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
};

class Line
{
    friend class Point;
private:
    Point t1,t2;
public:
    Line()
    {
        double temp = 0.0;
        t1.setxy(temp,temp);
        t2.setxy(temp,temp);
        cout << "Line : (0, 0) to (0, 0) is created." << endl;
    }
    ~Line()
    {
        cout << "Line : (" << t1.x <<", " << t1.y
        << ") to (" << t2.x << ", " << t2.y << ") is erased."<<endl;
    }
    void readLine()
    {
        char x;
        cin >> t1.x>>x>>t1.y>>t2.x>>x>>t2.y;
    }
    void show()
    {
        cout << "Line : (" << t1.x << ", " << t1.y << ") to ("
        <<t2.x << ", " << t2.y << ")"<<endl;
    }
    Line& SetLine(const Point& a,const Point& b)
    {
        t1 = a;
        t2 = b;
        return *this;
    }
    Line& setLine(double x1,double y1,double x2,double y2)
    {
        t1.x = x1;
        t1.y = y1;
        t2.x = x2;
        t2.y = y2;
        return *this;
    }
    Line& setLine(const Line& tt)
    {
        *this = tt;
        return *this;
    }
    Line& setLine(const Point& tt1,const Point& tt2)
    {
        t1 = tt1;
        t2 = tt2;
        return *this;
    }
    Line(const Point& tt1,const Point& tt2):t1(tt1),t2(tt2)
    {
        //t1 = tt1;
        //t2 = tt2;
        cout<<"Line : ("<<t1.x<<", "<<t1.y<<") to ("<<t2.x<<", "<<t2.y<<") is created."<<endl;
    }
    Line(const Line& l):t1(l.t1),t2(l.t2)
    {
        cout<<"Line : ("<<t1.x<<", "<<t1.y<<") to ("
        <<t2.x<<", "<<t2.y<<") is copied."<<endl;
    }
};


int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t,q).show();
}
/**************************************************************
	Problem: 1331
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

