#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y,sum=0;
    while(~scanf("%lf %lf",&x,&y))
    {
        sum+=x*y;
    }
    printf("%.2lf\n",sum);
    return 0;
}

/**************************************************************
	Problem: 1205
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

