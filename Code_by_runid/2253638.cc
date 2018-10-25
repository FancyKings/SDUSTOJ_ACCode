#include <iostream>
#include <cstdio>
#include <algorithm>


using namespace std;

void get_num(int &a,int &b,int &c)
{
    cin >> a >> b >> c;
}

void max_min(int& MAX,int &MIN,int& a,int &b,int &c)
{
    MAX = max(a,max(b,c));
    MIN = min(a,min(b,c));
}

int main()
{
    int cases;
    int mmax, mmin, a, b, c;

    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        get_num(a, b, c);
        max_min(mmax, mmin, a, b, c);
        cout<<"case "<<i<<" : "<<mmax<<", "<<mmin<<endl;
    }
}
/**************************************************************
	Problem: 1382
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

