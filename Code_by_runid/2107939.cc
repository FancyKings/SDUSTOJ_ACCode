#include <stdio.h>
#include <stdlib.h>
#define SWAP(t1,x1,y1){t1=x1;x1=y1;y1=t1;}
#define SWAP(t2,x2,y2){t2=x2;x2=y2;y2=t2;}


int int_swap(int * x,int * y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int dbl_swap(double * x,double * y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}


int main()
{
    int x1, y1, t1;
    double x2, y2, t2;

    scanf("%d %d", &x1, &y1);
    int_swap(&x1, &y1);
    printf("%d %d\n", x1, y1);

    scanf("%d %d", &x1, &y1);
    SWAP(t1, x1, y1);
    printf("%d %d\n", x1, y1);

    scanf("%lf %lf", &x2, &y2);
    dbl_swap(&x2, &y2);
    printf("%lg %lg\n", x2, y2);

    scanf("%lf %lf", &x2, &y2);
    SWAP(t2, x2, y2);
    printf("%lg %lg\n", x2, y2);
}

/**************************************************************
	Problem: 1107
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

