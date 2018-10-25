
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
	static int all;
	static int now;
public:
	Point()
	{
		all++, now++;
		x_ = 0; y_ = 0;
		//cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
	}
	~Point()
	{
		now--;
		//cout << "Point : (" << x_ << ", " << y_ << ") is erased." << endl;
	}
	Point(double xx, double yy)
	{
		all++, now++;
		x_ = xx; y_  = yy;
		//cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
	}
	Point(const Point & p)
	{
		now++, all++;
		x_ = p.x_; y_ = p.y_;
		//cout << "Point : (" << x_ << ", " << y_ << ") is copied." << endl;
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
	static void showCounter()
	{
		cout << "Current : " << now << " points." << endl;
	}
	static void showSum()
	{
		cout << "In total : " << all << " points." << endl;
	}
};



class Line
{
	friend class Point;
private:
	Point p, q;
	static int all;
	static int now;
	//double x1,y1,y1,x2;
public:
	Line(): p(0, 0), q(0, 0)
	{
		all++, now++;
		//cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is created." << endl;
	}
	~Line()
	{
		now--;
		//cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is erased." << endl;
	}
	Line(const Point &a, const Point &b): p(a), q(b)
	{
		all++, now++;
		//cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is created." << endl;
	}
	Line(const Line & t): p(t.p), q(t.q)
	{
		all++, now++;
		//cout << "Line : (" << p.getx() << ", " << p.gety() << ") to (" << q.getx() << ", " << q.gety() << ")" << " is copied." << endl;
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
	static void showCounter()
	{
		cout << "Current : " << now << " lines." << endl;
	}
	static void showSum()
	{
		cout << "In total : " << all << " lines." << endl;
	}
};



int Point::now = 0;
int Point::all = 0;
int Line::all = 0;
int Line::now = 0;



int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}

/**************************************************************
	Problem: 1333
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

