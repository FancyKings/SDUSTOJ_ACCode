#include <stdio.h>
#include <stdlib.h>
#define MAX 20000
int a[MAX];
int fib(int n,int a,int b)
{
    if(n==0) return a;
    return fib(n-1,b,a+b);
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int temp=n;
    while(temp--)
        scanf("%d",&a[i++]);
    for(i=0;i<n;i++)
    {
        printf("%d\n",fib(a[i],1,1));
    }
    return 0;
}

/**************************************************************
	Problem: 1095
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:824 kb
****************************************************************/

