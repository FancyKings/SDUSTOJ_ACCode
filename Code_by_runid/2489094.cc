#include <bits/stdc++.h>

using namespace std;
const double eps = 1e-6;
int all = 0;

double D(double x) {
	return (x > 0) ? (x) : (-x);
}

class Point {
public:
	double px, py;
	int id;
	Point(double x = 0, double y = 0): px(x), py(y) {
		id = ++all;
	}
	const double x()const {
		return px;
	}
	const double y()const {
		return py;
	}
	double x(double xx) {
		px = xx;
		return xx;
	}
	double y(double yy) {
		py = yy;
		return yy;
	}
	Point& setPoint(double x, double y) {
		px = x; py = y;
		return *this;
	}
	const bool isEqual(const Point P)const {
		if (px == P.px && py == P.py) {
			return true;
		}
		return false;
	}
	Point& copy(Point P) {
		px = P.px;
		py = P.py;
		return *this;
	}
	Point& inverse() {
		double x = px;
		px = py;
		py = x;
		return *this;
	}
	Point& inverse(Point P) {
		px = P.py;
		py = P.px;
		return *this;
	}
	const void showSumOfPoint()const  {
		cout << setprecision(16) << "In total : " << all << " points." << endl;
		return;
	}
	const void show()const {
		cout << setprecision(16) << "Point[" << id << "] : (" << px << ", " << py << ")" << endl;
	}
};

const void ShowPoint(const Point& P) {
	cout << setprecision(16) << "Point : (" << P.px << ", " << P.py << ")" << endl;
}
const void ShowPoint(double a,double b) {
	cout << setprecision(16) << "Point : (" << a << ", " << b << ")" << endl;
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

