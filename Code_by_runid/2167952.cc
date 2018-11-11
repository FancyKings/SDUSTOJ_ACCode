#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct ss{
	char name[20];
	double score[20];
}p[100];
char top[100];
int main()
{
	//FILE * f=fopen("t.txt","w");
	int m,n;
	while(~scanf("%d",&m))
	{
		memset(p,0,sizeof(p));
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n+1;i++)
		{
			scanf("%s",top);
			if(i)
			  printf("%5s  ",top);
			else
			  printf("name      ");
			memset(top,0,sizeof(top));
		}
		printf("  sum\n");
		for(i=0;i<m;i++)
		{
			scanf("%s",top);
			printf("%-8s  ",top);
			for(j=0;j<n;j++)
				scanf("%lf",&p[i].score[j]);
			int t;
			double sum=0;
			for(j=0;j<n;j++)
			{
				printf("%5.1lf  ",p[i].score[j]);
				sum+=p[i].score[j];
			}
			printf("%5.1lf\n",sum);
		}
		printf("average   ");
		for(j=0;j<n;j++)
		{
			double sum=0;
			for(i=0;i<m;i++)
			{
				sum+=p[i].score[j];
			}
			if(j!=n-1)
			  printf("%5.1lf  ",sum/m);
			else
			  printf("%5.1lf",sum/m);
		}
		printf("\n");
	}
	//fclose(f);
    return 0;
}
/**************************************************************
	Problem: 1254
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:816 kb
****************************************************************/

