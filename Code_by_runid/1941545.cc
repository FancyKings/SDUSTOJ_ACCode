#include<stdio.h>
//#include<math.h>
#define M_PI 3.14159265358979323846
int main()
{
    double r,s,v;
    scanf("%lf",&r);
    r/=2;
    s=4*M_PI*r*r;
    v=(4*M_PI*r*r*r)/3.0;
    printf("area = %.6lf\nvolume = %.6lf",s,v);
    return 0;
}
/**************************************************************
	Problem: 1401
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

