#include <bits/stdc++.h>

using namespace std;

class Square
{
public:
    double a;
public:
    Square(double t = 0):a(t)
    {
        cout << "Construct Square (" << a << ")" << endl;
    }
    const double length()const
    {
        return a;
    }
    const double perimeter()const
    {
        return 4 * a;
    }
    const double area()const
    {
        return a * a;
    }
};


class Rectangle: public Square
{
public:
    double b;
public:
    Rectangle(double m,double n):Square(m),b(n)
    {
        cout << "Construct Rectangle (" << m << ", " << n << ")" << endl;
    }
    const double width()const
    {
        return b;
    }
    const double perimeter()const
    {
        return (a + b) * 2;
    }
    const double area()const
    {
        return (a * b);
    }
};

class Cuboid: public Rectangle
{
public:
    double c;
public:
    Cuboid(double o = 0,double p = 0,double q = 0):Rectangle(o,p),c(q)
    {
        cout << "Construct Cuboid (" << o << ", " << p << ", " <<q << ")" << endl;
    }
    const double height()const
    {
        return c;
    }
    const double perimeter()const
    {
        return (a + b + c) * 4;
    }
    const double area()const
    {
        return (a*b + b*c + a*c) * 2;
    }
    const double volume()const
    {
        return (a*b*c);
    }
};

int main()
{
    int cases, l, w, h;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l;
        Square squa(l);
        cout << "A Square length " << squa.length() << ", ";
        cout << "Perimeter " << squa.perimeter() << ", ";
        cout << "Area " << squa.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w;
        Rectangle rect(l, w);
        cout << "A Rectangle length " << rect.length() << ", width " << rect.width() << ", ";
        cout << "Perimeter " << rect.perimeter() << ", ";
        cout << "Area " << rect.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w >> h;
        Cuboid cubo(l, w, h);
        cout << "A Cuboid length " << cubo.length() << ", width " << cubo.width() << ", height " << cubo.height() << ", ";
        cout << "Perimeter " << cubo.perimeter() << ", ";
        cout << "Area " << cubo.area() << ", ";
        cout << "Volume " << cubo.volume() << endl;
    }

}

/**************************************************************
	Problem: 1678
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

