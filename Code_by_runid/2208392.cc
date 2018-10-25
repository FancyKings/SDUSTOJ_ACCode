#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    double a, b, c;
    while(~scanf("%lf", &a) && scanf("%lf %lf", &b, &c))
    {
        double sum = 0;
        sum = sqrt((a + b +c)*(a + b -c)*(a + c -b)*(b + c -a));
        sum /= 4.0;
        printf("%.2lf\n" ,sum);
    }
	return 0;
}

/**************************************************************
	Problem: 1302
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

