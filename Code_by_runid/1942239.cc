#include<stdio.h>

int main()
{
    int a;
    double b;
    scanf("%d %lf",&a,&b);
    if(a>=0)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",-a);
    }
    if(b>=0)
    {
        printf("%g",b);
    }
    else
    {
        printf("%g",-b);
    }
    return 0;
}

/**************************************************************
	Problem: 1008
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

