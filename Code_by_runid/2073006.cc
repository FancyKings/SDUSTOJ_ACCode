#include <stdio.h>
#include <stdlib.h>
#define MAX 20000


int fib(int n,int a,int b)
{
    if(n==0) return a;
    return fib(n-1,b,a+b);
}

int Fibonacci(int n)
{
    fib(n,1,1);
}

#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    printf("%d\n",Fibonacci(n));
    return 0;
}
/**************************************************************
	Problem: 2173
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

