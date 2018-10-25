#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}
int main()
{
	int a[4]={0};
	int i=3;
	while(i--)
		scanf("%d",&a[i]);
	qsort(a,3,sizeof(int),cmp);
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
}
/**************************************************************
	Problem: 1287
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

