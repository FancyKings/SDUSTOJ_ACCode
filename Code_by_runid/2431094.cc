#include <bits/stdc++.h>

using namespace std;

int GCD(int a,int b)
{
    return (!b)?(a):(GCD(b,a%b));
}

int D(int a)
{
    return (a>=0)?(a):(-a);
}

class Fract
{
public:
    int n ,m;
    Fract(int a,int b)
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
    Fract& operator * (Fract a)
    {
        int up = a.n * n;
        int down = a.m * m;
        Fract ans(up,down);
        return ans;
    }
};

int main()
{
    int n, m, p, q;
    while(cin >> n >> m >> q >> p)
    {
        Fract f1(n, m), f2(q, p);
        Fract fr = f1 * f2;
        fr.show();
    }
}
/**************************************************************
	Problem: 1677
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

