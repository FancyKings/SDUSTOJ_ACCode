#include<stdio.h>
int main()
{
    double us,uk,jp,x,y;
    scanf("%lf %lf %lf\n",&us,&uk,&jp);
    scanf("%lf\n",&x);
    scanf("%lf",&y);
    printf("%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf",(us*x)/100,(uk*x)/100,(jp*x)/100,(y/us)*100,(y/uk)*100,(y/jp)*100);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

