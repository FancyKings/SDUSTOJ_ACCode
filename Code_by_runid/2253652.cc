#include <iostream>
#include <cstdio>


using std::cin;
using std::cout;
using std::endl;

int max(int a,int b)
{
    return (a>b)?a:b;
}

double max(double a,double b)
{
    return (a>b)?a:b;
}

int main()
{
	int a,b;
	double c,d;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	cin>>c>>d;
	cout<<max(c,d)<<endl;
	return 0;
}
/**************************************************************
	Problem: 1279
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

