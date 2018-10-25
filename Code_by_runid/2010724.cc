#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    unsigned long long n=0;
    while(scanf("%llu",&n)!=EOF)
    {
        unsigned long long sum=0,now=0;
        while(n--)
        {
            scanf("%llu",&now);
            sum+=now;
        }
        printf("%llu\n",sum);
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

