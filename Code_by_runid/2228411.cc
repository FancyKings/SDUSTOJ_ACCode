#include <stdio.h>
#define P 3.14159
int main()
{
    double r,R;
    while(~scanf("%lf %lf",&r,&R))
    {
        double s=P*(R*R-r*r);
        printf("%.3lf\n",s);
    }
    return 0;
}

/**************************************************************
	Problem: 1761
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

