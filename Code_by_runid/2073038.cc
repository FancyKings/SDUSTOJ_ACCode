#include <stdio.h>
#include <stdlib.h>

long long fib(int n,double a,double b)
{
    if(n==0) return a;
    return fib(n-1,b,a+b);
}

long long Fibonacci(int n)
{
    fib(n,1,1);
}

int main()
{
    int n;
    while(~scanf("%d",&n))
    printf("%lld\n",Fibonacci(n));
    return 0;
}

/**************************************************************
	Problem: 2174
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

