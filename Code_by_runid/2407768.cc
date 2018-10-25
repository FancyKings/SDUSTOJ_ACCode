#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    int x,y;
    Point(int a = 0,int b = 0)
    {
        x = a,y = b;
    }
    friend ostream& operator << (ostream& out, Point & P)
    {
        out << P.x << ' ' << P.y << endl;
        return out;
    }
};

template <class T>
class Data
{
public:
    T data;
    Data(T a):data(a){};
    void show()
    {
        cout << data << endl;
    }
    ~Data(){};
};

int main()
{
    string n;
    int x, y, d;
    char c;
    cin>>n;
    cin>>x>>y>>d;
    cin>>c;
    Point p(x, y);
    Data<char> aChar(c);
    Data<int> anInt(d);
    Data<Point> aPoint(p);
    Data<string> aString(n);
    aChar.show();
    anInt.show();
    aString.show();
    aPoint.show();
    return 0;
}
/**************************************************************
	Problem: 1825
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

