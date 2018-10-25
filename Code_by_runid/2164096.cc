#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double * allocate(int n)
{
	double * p;
	p=(double*)calloc(n+2,sizeof(double));
	return p;
}
void input(double * p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lf",&p[i]);
	}

}
void output(double  * p,int n)
{
	int x,y,flag=0;
	scanf("%d %d",&x,&y);
	int i;
	for(i=x-1;i<y;i++)
	{
		if(i<0)
			continue;
		else if(i>n-1){
			break;
		}
		else
		{
			flag=1;
			printf("%lg\n",p[i]);
		}
	}
	if(!flag)
	  printf("no output\n");
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

