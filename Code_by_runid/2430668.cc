#include <bits/stdc++.h>

using namespace std;
const double PI = 3.14;

class Shape
{
public:
    static int NumOfShapes;
    double r;
    Shape(double x):r(x){
        NumOfShapes++;
        cout << "A shape is created!" << endl;
        };
    virtual ~Shape(){
        cout << "A shape is erased!" << endl;
    };
    static int getNumOfShapes()
    {
        return NumOfShapes;
    }
    virtual double getArea() = 0;
};

class Circle:public Shape
{
public:
    static int NumOfCircles;
    double l;
    Circle(double x):l(x),Shape(x){
        NumOfCircles++;
        cout << "A circle is created!" << endl;
        };
    ~Circle(){
        cout << "A circle is erased!" << endl;
    };
    double getArea()
    {
        return (l*l*PI);
    }
    static int getNumOfCircles()
    {
        return (NumOfCircles);
    }
};

class Square:public Shape
{
public:
    static int NumOfSquares;
    double r;
    Square(double x):r(x),Shape(x){
        NumOfSquares++;
        cout << "A square is created!" << endl;
    };
    ~Square(){
        cout << "A square is erased!" << endl;
    };
    double getArea()
    {
        return (r*r);
    }
    static int getNumOfSquares()
    {
        return (NumOfSquares);
    }
};

int Shape::NumOfShapes = 0;
int Circle::NumOfCircles = 0;
int Square::NumOfSquares = 0;

int main()
{
    int cases;
    char type;
    double data;
    Shape *shape;
    cin>>cases;
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>data;
        switch(type)
        {
        case 'C':
            shape = new Circle(data);
            break;
        case 'S':
            shape = new Square(data);
            break;
        }
        cout<<"Area = "<<setprecision(2)<<fixed<<shape->getArea()<<endl;
        delete shape;
    }
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
}

/**************************************************************
	Problem: 1810
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

