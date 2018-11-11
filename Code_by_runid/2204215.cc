#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long long x;

int main()
{
    while(~scanf("%lld",&x))
    {
        double m=x/1024.0;
        printf("%lldK\n",(long long)m);
        m/=1024;
        printf("%.02lfM\n",m);
        m/=1024;
        printf("%.02lfG\n",m);
    }
    return 0;
}

/**************************************************************
	Problem: 2040
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

