#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
typedef long long LL;
/*Gloable init*/

using namespace std;

class  Point
{
	friend class Line;
private:
	double x_, y_;
public:
	Point()
	{
		x_ = 0; y_ = 0;
		cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
	}
	~Point()
	{
		cout << "Point : (" << x_ << ", " << y_ << ") is erased." << endl;
	}
	Point(double xx, double yy)
	{
		x_ = xx; y_  = yy;
		cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
	}
	Point(const Point & p)
	{
		x_ = p.x_; y_ = p.y_; cout << "Point : (" << x_ << ", " << y_ << ") is copied." << endl;
	}
	void show() const
	{
		cout << "Point : (" << x_  << ", " << y_ << ")" << endl;
	}
	double getx() const
	{
		return x_;
	}
	double gety() const
	{
		return y_;
	}
	double x()const
	{
		return x_;
	}
	double y()const
	{
		return y_;
	}
	void setxy(double xx, double yy)
	{
		x_ =  xx; y_ = yy;
	}
	void showNoEndOfLine() const
	{
		cout << "Point : (" << x_  << ", " << y_ << ")"  ;
	}
};

class Line
{
	friend class Point;
private:
	Point p, q;
	//double x1,y1,y1,x2;
public:
	Line(): p(0, 0), q(0, 0)
	{
		cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is created." << endl;
	}
	~Line()
	{
		cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is erased." << endl;
	}
	Line(const Point &a, const Point &b): p(a), q(b)
	{
		cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is created." << endl;
	}
	Line(const Line & t): p(t.p), q(t.q)
	{
		cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is copied." << endl;
	}
	void show() const
	{
		cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << endl;
	}
	Line &setLine(double x1, double y1, double x2, double y2)
	{
		p.setxy(x1, y1);
		q.setxy(x2, y2);
		return *this;
	}
	Line & setLine(const Line &t)
	{
		p = t.p;
		q = t.q;
		return *this;
	}
	Line & setLine(const Point &a, const Point &b)
	{
		p = a;
		q = b;
		return *this;
	}
	void readLine()
	{
		double x1, y1, x2, y2;
		char ch ;
		cin >> x1 >> ch >> y1 >> x2 >> ch >> y2;
		p.setxy(x1, y1);
		q.setxy(x2, y2);
	}
	const  Point  &start() const
	{
		return p;
	}
	const  Point  &end() const
	{
		return q;
	}
	void setStart(const Point & t)
	{
		p = t;
	}
	void setEnd(const Point & t)
	{
		q = t;
	}
};


void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}

void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}

void showLine(const Line& line)
{
    line.show();
}

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}

/**************************************************************
	Problem: 1332
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

