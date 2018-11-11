#include <bits/stdc++.h>

using namespace std;

class Point
{
private:
    double x,y;
public:
    Point(double tx,double ty)
    {
        x = tx;
        y = ty;
    }
    Point():x(0),y(0){};
    void show()
    {
        cout <<"Point : (" << x <<", "<<y<<")"<<endl;
    }
    double getx()const{
        return x;
    }
    double gety()const{
        return y;
    }
};

class Line{
private:
    double x1,x2,y1,y2;
public:
    Line(double xx1,double yy1,double xx2,double yy2)
    {
        x1 = xx1;
        y1 = yy1;
        x2 = xx2;
        y2 = yy2;
        cout << "Line : (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2<<")" <<" is created."<<endl;
    }
    Line(Point& xx,Point& yy)
    {
        x1 = xx.getx();
        x2 = yy.getx();
        y1 = xx.gety();
        y2 = yy.gety();
        cout << "Line : (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2<<")" <<" is created."<<endl;
    }
    void show()
    {
        cout << "Line : (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2<<")"<<endl;
    }
    ~Line()
    {
        cout << "Line : (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2<<")" <<" is erased."<<endl;
    }
};


int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1328
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1272 kb
****************************************************************/

