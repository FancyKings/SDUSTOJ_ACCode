#include <bits/stdc++.h>

using namespace std;


class Point
{
    friend class Circle;
private:
    int x,y;
    static int sumOfPoints;
public:
    Point():x(0),y(0)
    {
        sumOfPoints++;
        cout << "The Point (" << x << ", " << y << ") is created! Now, we have " << sumOfPoints << " points." << endl;
    };
    Point(const Point& P)
    {
        sumOfPoints++;
        *this = P;
        cout << "A Point (" << x << ", " << y << ") is copied! Now, we have " << sumOfPoints << " points." << endl;
    }
    Point(int a,int b)
    {
        sumOfPoints++;
        x = a,y = b;
        cout << "The Point (" << x << ", " << y << ") is created! Now, we have " << sumOfPoints << " points." << endl;
    }
    ~Point()
    {
        sumOfPoints--;
        cout << "A Point (" << x << ", " << y << ") is erased! Now, we have " << sumOfPoints << " points." << endl;
    };
    const int getX()const
    {
        return x;
    }
    const int getY()const
    {
        return y;
    }
    static int getNumOfPoints()
    {
        return sumOfPoints;
    }
};

int Point::sumOfPoints = 0;


class Circle
{
    friend class Point;
private:
    Point c;
    int r;
    static int sumOfCircles;
public:
    Circle()
    {
        cout<<"A circle at ("<<c.x<<", "<<c.y<<") and radius "<<r<<" is created! Now, we have "<<sumOfCircles<<" circles."<<endl;
    }
    Circle(Point p,int r):c(p),r(r)
    {
        sumOfCircles++;
        cout<<"A circle at ("<<c.x<<", "<<c.y<<") and radius "<<r<<" is created! Now, we have "<<sumOfCircles<<" circles."<<endl;
    }
    Circle(int a,int b,int c):c(a,b),r(c)
    {
        sumOfCircles++;
        cout<<"A circle at ("<<a<<", "<<b<<") and radius "<<r<<" is created! Now, we have "<<sumOfCircles<<" circles."<<endl;
    }
    ~Circle()
    {
        sumOfCircles--;
        cout<<"A circle at ("<<c.x<<", "<<c.y<<") and radius "<<r<<" is erased! Now, we have "<<sumOfCircles<<" circles."<<endl;
    }
    Circle(const Circle &a)
    {
        sumOfCircles++;
        c.x = a.c.x;
        c.y = a.c.x;
        r = a.r;
        cout<<"A circle at ("<<c.x<<", "<<c.y<<") and radius "<<r<<" is copied! Now, we have "<<sumOfCircles<<" circles."<<endl;
    }
    static int getNumOfCircles()
    {
        return sumOfCircles;
    }
    Point& getCenter()
    {
        return c;
    }
    int pointInCircle(Point &p)
    {
        if((p.x-c.x)*(p.x-c.x)+(p.y-c.y)*(p.y-c.y) < r*r)
        {
           return 1;
        }
        return 0;
    }
};

int Circle::sumOfCircles = 0;


int main()
{
    int cases,num;
    int x, y, r, px, py;
    Point aPoint(0,0), *bPoint;
    Circle aCircle(1,1,1);
    cin>>cases;
    cout<<"We have "<<Point::getNumOfPoints()<<" points and "<<Circle::getNumOfCircles()<<" circles now."<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        bPoint = new Point(x,y);
        Circle circle(*bPoint, r);
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>px>>py;
            if (circle.pointInCircle(*(new Point(px, py))))
            {
                cout<<"("<<px<<", "<<py<<") is in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
            else
            {
                cout<<"("<<px<<", "<<py<<") is not in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
        }
        delete bPoint;
    }
    cout<<"We have "<<Point::getNumOfPoints()<<" points, and "<<Circle::getNumOfCircles()<<" circles."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1778
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

