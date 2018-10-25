#include <stdio.h>

int sum (int a,int b)
{
	if(a==0)
		return b+1;
	if(a>0&&b==0)
		return sum(a-1,1);
	if(a>0&&b>0)
		return sum(a-1,sum(a,b-1));
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("A(%d, %d) = ",a,b);
	printf("%d\n",sum(a,b));
	return 0;
}
/**************************************************************
	Problem: 1512
	User: 201701060705
	Language: C
	Result: Accepted
	Time:1180 ms
	Memory:1292 kb
****************************************************************/

