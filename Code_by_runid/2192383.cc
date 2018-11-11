#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[60][60];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i=1,hang=0,lie=n-1,ptwo=n*n;
		a[0][n-1]=i;

		while(i<ptwo)
		{
//			printf("%d",i);
			while(!a[hang+1][lie]&&hang+1<n)
			  a[++hang][lie]=++i;
			while(!a[hang][lie-1]&&lie-1>=0)
			  a[hang][--lie]=++i;
			while(!a[hang-1][lie]&&hang-1>=0)
			{
			  a[--hang][lie]=++i;
			}
			while(!a[hang][lie+1]&&lie+1<n)
			  a[hang][++lie]=++i;
		}
		int x,y;
		for(x=0;x<n;x++)
		{
			printf("%d",a[x][0]);
			for(y=1;y<n;y++)
			{
				printf(" %d",a[x][y]);
			}
			printf("\n");
		}
		printf("\n");
		memset(a,0,sizeof(a));
	}
    return 0;
}
/**************************************************************
	Problem: 1184
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:760 kb
****************************************************************/

