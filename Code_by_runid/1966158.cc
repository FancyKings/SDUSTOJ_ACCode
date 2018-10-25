#include<stdio.h>
int main()
{
    double i=0,sum=0,k=0;
    while(scanf("%lf",&i)!=EOF)
    {
        k++;
        sum+=i;
    }
    printf("%.3lf\n",sum/k);
    return 0;
}

/**************************************************************
	Problem: 1417
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

