#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
double* allocate(int n)
{
    return (double*)calloc(n+2,sizeof(double));
}
void input(double* p, int n)
{
    int i=0;
    while(n--)
    {
        scanf("%lf",&p[i++]);
    }
}
void output(double* p, int n)
{
    int m,e;
    scanf("%d %d",&m,&e);
    if(m>e||e<1||m>n)
    {
        printf("no output\n");
        return 0;
    }
    if(m<1)
        m=1;
    if(e>n)
        e=n;
    int i;
    for(i=m;i<=e;i++)
    {
        printf("%lg\n",p[i-1]);
    }
}
void release(double * p)
{
    free(p);
}


int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
/**************************************************************
	Problem: 1383
	User: 201701060705
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:3092 kb
****************************************************************/

