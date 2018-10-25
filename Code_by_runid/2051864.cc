#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    while (~scanf("%d:%d:%d",&h,&m,&s))
    {
        long long sum=0;
        sum=h*3600+m*60+(s+1)*1;
        printf("%lld\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1455
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

