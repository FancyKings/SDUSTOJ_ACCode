#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int score[10];
	double aver;
	char name[81];
}Choice;

int cmpdouble(const void * a,const void * b)
{
	Choice * x=(Choice *)a;
	Choice * y=(Choice *)b;
	return y->aver-x->aver;
}


void inputChoice(Choice a[],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		scanf("%s",a[i].name);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i].score[j]);
		}
	}
}

int cmp(const void *a ,const void *b)
{
	return *(int*)b-*(int*)a;
}


void sort(Choice a[],int m,int n)
{
	int i,j=0;
	for(i=0;i<m;i++)
	{
		double sum=0;
		qsort(a[i].score,n,sizeof(int),cmp);
		for(j=1;j<n-1;j++)
		{
			sum+=a[i].score[j];
		}
		a[i].aver=sum/(n-2);
	}
	qsort(a,m,sizeof(Choice),cmpdouble);
}


int main()
{
    Choice peoples[30];
    int M,N,i;
    scanf("%d%d",&M,&N);
    inputChoice(peoples,M,N);
    sort(peoples,M,N);
    for (i=0; i<3; i++)
        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
    return 0;
}
/**************************************************************
	Problem: 1220
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

