#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 150
int a[MAX][MAX];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i=1;
		int hang=0,lie=n/2;
		for(;i<n*n+1;i++)
		{
			a[hang][lie]=i;
			if(hang==0&&lie==n-1)
			{
				hang+=1;
				continue;
			}
			if(hang==0)
			{
				hang=n-1;
				lie+=1;
				continue;
			}
			if(lie==n-1)
			{
				lie=0;
				hang-=1;
				continue;
			}
			hang-=1;lie+=1;
			if(a[hang][lie])
			{
				hang+=2;
				lie-=1;
			}
		}
		for(hang=0;hang<n;hang++)
		{
			printf("%d",a[hang][0]);
			for(lie=1;lie<n;lie++)
			{
				printf(" %d",a[hang][lie]);
			}
			printf("\n");
		}
		printf("\n");
		memset(a,0,MAX*MAX);
	}
	return 0;
}
/**************************************************************
	Problem: 1048
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:836 kb
****************************************************************/

