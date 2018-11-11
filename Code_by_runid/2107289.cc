#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m,sumz=0,sumf=0,t;
    while (~scanf("%lld",&m))
    {
        while(m--)
        {
            scanf("%lld",&t);
            if(t>0)sumz++;
            if(t<0)sumf++;
        }
        printf("%lld %lld\n",sumz,sumf);
    }
    return 0;
}

/**************************************************************
	Problem: 1273
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

