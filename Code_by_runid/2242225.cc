#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double x;
    while(~scanf("%lf",&x))
    {
        printf("%.7lf\n",sqrt(x));
    }
    return 0;
}

/**************************************************************
	Problem: 2025
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

