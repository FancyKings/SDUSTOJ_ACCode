#include <stdio.h>
#include <ctype.h>

long long s(int n,int k)
{
    if(n==k)
        return 1;
    else if(n<k||n==0)
    {
        return 0;
    }
    else if(n>k)
        return s(n-1,k-1)+s(n-1,k);
    else return 0;
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    {
        if(n<k)
        {
            printf("0\n");
        }
        else if(n==k)
            printf("1\n");
        else
        {
            long long end=s(n,k);
            printf("%lld\n",end);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2038
	User: 201701060705
	Language: C
	Result: Accepted
	Time:932 ms
	Memory:748 kb
****************************************************************/

