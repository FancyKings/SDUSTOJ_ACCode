#include<stdio.h>
int main()
{
    double k=0;
    double sum=0;
    scanf("%lf",&k);
    double t=k;
    while(t--)
    {
        double i=0;
        scanf("%lf",&i);
        sum+=i;
    }
    printf("%.3lf\n",sum/k);
    return 0;
}

/**************************************************************
	Problem: 1416
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

