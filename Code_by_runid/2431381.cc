#include <bits/stdc++.h>

using namespace std;

int GCD(int a,int b)
{
    return (!b)?(a):(GCD(b,a%b));
};

int D(int a)
{
    return (a>=0)?(a):(-a);
};

template<class T>
class Array
{
public:
    T n;
    T *num;
    Array(int a):n(a){
        num = NULL;
        num = new T[(int)n*2];
    };
    void input(int a)
    {
        for(int i = 0;i < a && i < n; i++)
        {
            cin >> num[i];
        }
        return;
    }
    T& operator [](int i)
    {
        return num[i];
    }
};

class Fract
{
public:
    int n ,m;
    Fract(int a = 0,int b = 1)
    {
        int same = GCD(a,b);
        n = a / same;
        m = b / same;
    }
    void show()
    {
        if(!n)
        {
            cout << 0 << endl;
        }
        else if(m == 1)
        {
            cout << n << endl;
        }
        else
        {
            if ( n * m > 0)
            {
                cout << n << '/' << m << endl;
            }
            else
            {
                cout << '-' << D(n) << '/' << D(m) << endl;;
            }
        }
        return;
    }
    operator double()
    {
        return (double)n/m;
    }
    Fract operator * (Fract a)
    {
        int up = a.n * n;
        int down = a.m * m;
        Fract ans(up,down);
        return ans;
    }
    Fract &operator +=(Fract &x){
        Fract y(x.n*m+x.m*n,x.m*m);
        return *this=y;
    }

    friend istream & operator >> (istream & in,Fract &f)
    {
        in>>f.n>>f.m;
        return in;
    }
};

int main()
{
    int  n;
    cin >> n;
    Array<double> db(1000);
    db.input(n);
    double dbsum(0.0);
    for(int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(1000);
    fr.input(n);
    Fract frsum(0, 1);
    for(int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}

/**************************************************************
	Problem: 1680
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

