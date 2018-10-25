#include <bits/stdc++.h>

using namespace std;

class Point
{
private:
    double x,y;
    //friend class Line;
public:
    Point(double tx,double ty)
    {
        x = tx;
        y = ty;
        cout << "Point : (" << tx << ", " << ty <<") is created."<<endl;
    }
    Point(const Point& temp)
    {
        x = temp.x;
        y = temp.y;
        cout << "Point : (" << x << ", " << y <<") is copied."<<endl;
    }
    Point():x(0),y(0)
    {
        cout << "Point : (" << x << ", " << y <<") is created."<<endl;
    };
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
    void Setx(double xx)
    {
        x = xx;
    }
    void Sety(double yy)
    {
        y = yy;
    }
    ~Point()
    {
        cout << "Point : (" << x << ", " << y <<") is erased."<<endl;
    }
};

class Line{
private:
    Point x_,y_;
    double x1,x2,y1,y2;
    //friend class Point;
public:
    Line(double xx1,double yy1,double xx2,double yy2):x_(xx1,yy1),y_(xx2,yy2)
    {
        cout << "Line : (" << xx1 << ", " << yy1 << ") to (" << xx2 << ", " << yy2 <<")" <<" is created."<<endl;
    }
    void SetLine(double xx1,double yy1,double xx2,double yy2)
    {
        x_.Setx(xx1);
        x_.Sety(yy1);
        y_.Setx(xx2);
        y_.Sety(yy2);
        x1 = xx1;
        x2 = xx2;
        y1 = yy1;
        y2 = yy2;
        //cout << "Line : (" << xx1 << ", " << yy1 << ") to (" << xx2 << ", " << yy2 <<")" <<" is created."<<endl;
    }
    Line():x1(0),x2(0),y1(0),y2(0)
    {
        cout << "Line : (" << 0 << ", " << 0 << ") to (" << 0 << ", " << 0 <<")" <<" is created."<<endl;

    };
    Line(const Point& xx,const Point& yy):x_(xx),y_(yy)
    {
        x1 = xx.getx();
        x2 = yy.getx();
        y1 = xx.gety();
        y2 = yy.gety();
        cout << "Line : (" << xx.getx() << ", " << xx.gety() << ") to (" << yy.getx() << ", " << yy.gety()<<")" <<" is created."<<endl;
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
    Line line[num];
    for(i = 0; i < num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1330
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:36 ms
	Memory:1272 kb
****************************************************************/

