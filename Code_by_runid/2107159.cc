#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long m,n;
    while (~scanf("%llu %llu",&m,&n))
    {
        printf("%llu %llu\n",m/n,m%n);
    }
    return 0;
}

/**************************************************************
	Problem: 1635
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

