#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ULL;

const double pi = acos(-1);

class Shape{
public:
    int l;
    Shape(int a = 0):l(a){};
    virtual int area() = 0;
};

class Square:public Shape{
public:
    int a;
    Square(int aa):a(aa){};
    int area(){
        return (a * a);
    }
};

class Rectangle:public Shape{
public:
    int ll,a;
    Rectangle(int aa,int l):a(aa),ll(l){};
    int area(){
        return (ll*a);
    }
};

class Cube:public Shape{
public:
    int a;
    Cube(int aa):a(aa){};
    int area(){
        return (a*a*6);
    }
};

class Cuboid:public Shape{
public:
    int a,b,c;
    Cuboid(int aa,int bb,int cc):a(aa),b(bb),c(cc){};
    int area(){
        return (a*b*2+b*c*2+a*c*2);
    }
};
int main()
{
    int n, l, w, h;
    cin >> n;
    Shape *sp[100];
    string name;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        if(name == "SQR")
        {
            cin >> l;
            sp[i] = new Square(l);
        }
        if(name == "RCT")
        {
            cin >> l >> w;
            sp[i] = new Rectangle(l, w);
        }
        if(name == "CUB")
        {
            cin >> l;
            sp[i] = new Cube(l);
        }
        if(name == "CBD")
        {
            cin >> l >> w >> h;
            sp[i] = new Cuboid(l, w, h);
        }
    }
    for(int i = 0; i < n; i++)
        cout << sp[i]->area() << endl;
    for(int i = 0; i < n; i++)
        delete sp[i];
}

/**************************************************************
	Problem: 2096
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

