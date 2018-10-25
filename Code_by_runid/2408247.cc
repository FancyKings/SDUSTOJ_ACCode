#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14;


class Graphic
{
public:
    virtual void show() = 0;
    string name;
    double v;
    Graphic(string a ="", double t = 0):name(a),v(t) {};
};

class Shape:public Graphic
{
public:
    virtual void show() = 0;
};

class Solid:public Graphic
{
public:
    virtual void show() = 0;
};

class Square:public Shape
{
public:
    double v;
    Square(double t = 0):v(t) {};
    void show()
    {
        cout << "Square, side:" << v << ", area:" << v*v << "." << endl;
    }
};


class Circle:public Shape
{
public:
    double v;
    Circle(double t = 0):v(t) {};
    void show()
    {
        cout << "Circle, radius:"
             <<v << ", area:"
             << pi * v * v  << "." << endl;
    }
};

class Ball:public Circle
{
public:
    double v;
    Ball(double t = 0):v(t) {};
    void show ()
    {
        cout << "Ball, radius:"
             << v << ", area:"
             << 4*pi*v*v << ", volume:"
             << 4/3*pi*v*v*v << "." << endl;
    }
};

class Cube:public Square
{
public:
    double v;
    Cube(double t = 0):v(t) {};
    void show()
    {
        cout<<"Cube, side:" << v << ", area:" << 6 * v * v
            << ", volume:" << v * v * v << "." << endl;
    }
};

int main()
{
    Graphic *gp[100];
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i)
    {
        string types;
        double value;
        cin>>types>>value;
        if(types == "square")
            gp[i] = new Square(value);
        if(types == "cube")
            gp[i] = new Cube(value);
        if(types == "ball")
            gp[i] = new Ball(value);
        if(types == "circle")
            gp[i] = new Circle(value);
    }
    for(int i = 0; i < cases; ++i)
    {
        gp[i]->show();
        delete gp[i];
    }
}

/**************************************************************
	Problem: 1394
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

