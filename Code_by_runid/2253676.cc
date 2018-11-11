#include <iostream>
#include <cstdio>
const double PI = 3.14;


using std::cin;
using std::cout;
using std::endl;

double area(double r = 1.0)
{
    return (PI * r * r);
}
int main()
{
	double r;
	cin>>r;
	cout<<area(r)<<endl;
	cout<<area()<<endl;
	return 0;
}
/**************************************************************
	Problem: 1280
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

