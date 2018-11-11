#include <bits/stdc++.h>

using namespace std;

class Point
{
    friend class Rectangle;
private:
    int _x,_y;
public:
    Point():_x(0),_y(0)
    {
        cout << "A point (" << _x << ", " << _y << ") is created!" << endl;
    };
//    Point(int x,int y):_x(x),_y(y)
//    {
//        cout << "A point (" << x << ", " << y << ") is created!" << endl;
//    };
    Point(int& x,int& y)
    {
        _x = x,_y = y;
        cout << "A point (" << x << ", " << y << ") is created!" << endl;
    }
    Point(const Point& P)
    {
        _x = P.getX();
        _y = P.getY();
        cout << "A point (" << _x << ", " << _y << ") is copied!" << endl;
    }
    const int getX()const
    {
        return _x;
    }
    const int getY()const
    {
        return _y;
    }
    void setxy(int x,int y)
    {
        _x = x,_y = y;
        //cout << "A point (" << _x << ", " << _y << ") is copied!" << endl;
    }
    void show()
    {
        cout << "A point (" << getX() << ", " << getY() << ") is created!" << endl;
    }
    ~Point()
    {
        cout << "A point (" << getX() << ", " << getY() << ") is erased!" << endl;
    };
};


class Rectangle
{
    friend class Point;
private:
    Point lt,rb;
public:
    Rectangle()
    {
        lt.setxy(0,0);
        rb.setxy(0,0);
        cout << "A rectangle (" << lt.getX() << ", " << lt.getY() << ") to (" << rb.getX() << ", "<<rb.getY() << ") is created!" << endl;;
    };
    ~Rectangle()
    {
        cout << "A rectangle (" << lt.getX() << ", " << lt.getY() << ") to (" << rb.getX() << ", "<<rb.getY() << ") is erased!" << endl;;
    };
    Rectangle(int& a,int& b,int& c,int& d):lt(a,b),rb(c,d)
    {
//        lt.setxy(a,b);
//        rb.setxy(c,d);
        cout << "A rectangle (" << a << ", " << b << ") to (" << c << ", "<< d << ") is created!" << endl;;
    }
    const Point& getLeftTop()const
    {
        return lt;
    }
    const Point getRightBottome()const
    {
        return rb;
    }
    const int getArea()const
    {
        int a = abs(lt.getX() - rb.getX());
        int b = abs(lt.getY() - rb.getY());
        return a* b;
    }
};



int main()
{
    int cases;
    int x1, y1, x2, y2;

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        Rectangle rect(x1,y1,x2,y2);
        cout<<"Area: "<<rect.getArea()<<endl;
        cout<<"Left top is ("<<rect.getLeftTop().getX()<<", "<<rect.getLeftTop().getY()<<")"<<endl;
        cout<<"Right bottom is ("<<rect.getRightBottome().getX()<<", "<<rect.getRightBottome().getY()<<")"<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1777
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

