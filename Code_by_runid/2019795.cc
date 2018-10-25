#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long long i,sum=0;
    while(scanf("%llu",&i)!=EOF)
    {
        while(i--)
        {
            unsigned long long k;
            scanf("%llu",&k);
            sum+=k;
        }
        printf("%llu\n",sum);
        sum=0;
    }
    return 0;
}

/**************************************************************
	Problem: 2135
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

