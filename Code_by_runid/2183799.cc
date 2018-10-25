#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 1000

int main()
{
    double x;
    while(~scanf("%lf",&x))
    {
        if(x>=0)
            printf("+");
        else
            printf("-");
        if(x>=0)
        {
            int a=x;
            double d=x-a;
            printf(" %d %lg\n",a,d);
        }
        else
        {
            x=-x;
            int a=(x);
            printf(" %d %lg\n",a,(x-a));
        }
    }
}

/**************************************************************
	Problem: 1243
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

