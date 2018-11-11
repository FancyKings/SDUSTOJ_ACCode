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
            if( n * m > 0)
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
};


int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        cout << (double)fr << " ";
        fr.show();
    }
}

/**************************************************************
	Problem: 1676
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

