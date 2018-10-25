#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int main()
{
    double h,w,d;
    while(~scanf("%lf %lf",&h,&w))
    {
        d=(w)/((h/100)*(h/100));
        if(d<19)
        {
            printf("%.2lf lower\n",d);
        }
        else if(d<25)
        {
            printf("%.2lf health\n",d);
        }
        else if(d<30)
        {
            printf("%.2lf heavy\n",d);
        }
        else if(d<40)
        {
            printf("%.2lf super heavy\n",d);
        }
        else
            printf("%.2lf extra heavy\n",d);
    }
    return 0;
}
/**************************************************************
	Problem: 1219
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

