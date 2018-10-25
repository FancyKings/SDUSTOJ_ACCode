#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int wanquan(double a)
{
    int b;
    b=(int)sqrt(a);
    if(b*b==a)
        return 1;
    else
        return 0;
}

int main()
{
    double n=0;
    scanf("%lf",&n);
    int t=n;
    if(wanquan(n)&&!(t%2)&&(n>0))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1403
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

