#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define OVERFLOW -1
long long fibs(int n,long long a,long long b)
{
    if(n==1)
        return a;
    else
    {
        return fibs(n-1,b,a+b);
    }
}

long long fibonacci(int n)
{
    if(n>=92)
        return -1;
    else
    {
		if(n==0)
			return 1;
		else
        	return fibs(n,1,2);
    }
}


int main()
{
    int n;
    long long fib;
    while(scanf("%d", &n) != EOF)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            puts("overflow");
        else
            printf("%lld\n", fib);
    }
    return 0;
}
/**************************************************************
	Problem: 1477
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

