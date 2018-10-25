#include <stdio.h>
#define P 3.14159
int main()
{
    double sum=0,
            now=0;
    while(~scanf("%lf",&now))
    {
        sum+=now;
    }
    if(sum>=4899)
    {
        int d = sum*0.8;
        sum=d;
        printf("%.2lf\n",sum);
    }
    else if(sum>=2499)
    {
        int d = sum *0.85;
        sum = d;
        printf("%.2lf\n",sum);
    }
    else if(sum>=899)
    {
        int d = sum*0.9;
        sum = d;
        printf("%.2lf\n",sum);
    }
    else if(sum>=399)
    {
        int d = sum * 0.95;
        sum=d;
        printf("%.2lf\n",sum);
    }
    else
    {
        int d = sum ;
        sum = d;
        printf("%.2lf\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1762
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

