#include<stdio.h>

int main()
{
    double m,n,x;

    scanf("%lf %lf %lf",&m,&n,&x);
   // double a=0.88*m*x;
    if((m*x)>=n)
    {
        //printf("%lf %lf %lf %lf\n",m,n,x*m,a);
        printf("%.2lf",0.88*m*x);
    }
    else
    {
        printf("%.2lf",m*x);
    }
    return 0;
}

/**************************************************************
	Problem: 1009
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

