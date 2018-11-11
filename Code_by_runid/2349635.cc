#include <bits/stdc++.h>

using namespace std;

#define dert(a,b,c,d)((a - c) * (a - c) + (b - d) * (b - d));


class Point
{
    friend class Circle;
public:
    double x,y;
public:
    Point(double a = 0,double b = 0)
    {
        x = a,y = b;
    }
    ~Point(){};
};

class Circle
{
    friend class Point;
public:
    Point p;
    double r;
public:
    Circle(const Point& P,double rr):p(P),r(rr){};
    Circle():p(0,0),r(0){};
    int JudgeRelation(const Circle& a)
    {
        double derto = dert(p.x,p.y,a.p.x,a.p.y);
        double sum = a.r + r;
        double del = ((a.r-r)>0)?(a.r-r):(r-a.r);
        sum *= sum;
        del *= del;
        if(sum < derto)
            return 1;
        else if(sum == derto)
            return 3;
        else if(del == derto)
            return 4;
        else if(derto < del)
            return 2;
        else
            return 5;
    }
};
int main()
{
    int cases;
    double x, y, r;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        Point p1(x,y);
        Circle c1(p1, r);
        cin>>x>>y>>r;
        Point p2(x, y);
        Circle c2(p2, r);
        switch(c1.JudgeRelation(c2))
        {
        case 1:
            cout<<"Outside"<<endl;
            break;
        case 2:
            cout<<"Inside"<<endl;
            break;
        case 3:
            cout<<"Externally tangent"<<endl;
            break;
        case 4:
            cout<<"Internally tangent"<<endl;
            break;
        case 5:
            cout<<"Intersection"<<endl;
        }
    }
}
/**************************************************************
	Problem: 1813
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

