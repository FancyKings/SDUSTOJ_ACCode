#include <bits/stdc++.h>

using namespace std;

#define dert(a,b,c,d)((a - c) * (a - c) + (b - d) * (b - d));

class Point
{
    friend class Graph;
public:
    double x,y;
public:
    Point():x(0),y(0)
    {
        cout<<"The Point ("<<setprecision(2)<<fixed<<x<<", "<<setprecision(2)<<fixed<<y<<") is created!"<<endl;
    }
    Point(double xx,double yy):x(xx),y(yy)
    {
        cout << "The Point (" << setprecision(2) << fixed << x << ", " << y << ") is created!" << endl;
    }
    Point(const Point& P):x(P.x),y(P.y)
    {
        cout << "A Point (" << setprecision(2) << fixed << x << ", " << y << ") is copied!" << endl;
    }
    ~Point()
    {
        cout << "A Point (" << setprecision(2) << fixed << x << ", " << y << ") is erased!" << endl;
    }
    const double getX()const
    {
        return x;
    }
    const double getY()const
    {
        return y;
    }
    void setx(double xx)
    {
        x = xx;
    }
    void sety(double yy)
    {
        y = yy;
    }
};

class Graph
{
    friend class Point;
private:
    Point* p;
    int numOfPoints;
public:
    Graph(Point* pp,int num)
    {
        numOfPoints = num;
        p = new Point[num];
        for(int i = 0;i < num;i++)
        {
            p[i] = pp[i];
        }
        cout << "A graph with " << num << " points is created!" << endl;
    }
//    Graph():numOfPoints(0)
//    {
//        p = NULL;
//        cout << "A graph with " << numOfPoints << " points is created!" << endl;
//    }
    ~Graph()
    {
        delete []p;
        cout << "A graph with " << numOfPoints << " points is erased!" << endl;
    }
    Point getCentroid()
    {
        double sum = 0;
        double ans = 0;
        for(int i = 0; i < numOfPoints; i++)
        {
            sum += ((p+i)->getX());
            ans += ((p+i)->getY());
        }
        ans /= numOfPoints;
        sum /= numOfPoints;
        Point* TEMP = new Point(sum,ans);
        //cout << "The Point (" << setprecision(2) << fixed << 0.00 << ", " << 0.00 << ") is created!" << endl;
        return *TEMP;
    }
};

int main()
{
    int cases,num;
    double x, y;
    Point centroid;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>num;
        Point points[num];
        for (int j = 0; j < num; j++)
        {
            cin>>x>>y;
            points[j] = *(new Point(x, y));
        }
        Graph graph(points, num);
        centroid = graph.getCentroid();
        cout<<setprecision(2)<<fixed<<"The centroid is ("<<centroid.getX()<<", "<<centroid.getY()<<")."<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1779
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

