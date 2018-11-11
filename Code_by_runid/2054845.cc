#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int have(long long j, long long k)
{
    while(j!=0)
    {
        if(j%10==k)
        {
            return 1;
        }
        else
            j/=10;
    }
    return 0;
}

int main()
{
    long long a,b,m,k=0;
    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        long long i,j=0,flag=0;
        for(i=a; i<=b; i++)
        {
            j=i;
            if(i>0)
            {
                if(j<10)
                {
                    if(j==k)
                    {
                        flag+=i;
                    }

//                    printf("%lld %lld %lld\n",j,k,flag);
                }
                else
                {
                    if(have(j,k))
                    {
                        flag+=j;
                    }

//                    printf("%lld %lld %lld\n",j,k,flag);
                }
            }
            if(i<0)
            {
                j=-i;
                if(j<10)
                {
                    if(j==k)
                        flag+=i;
                }
                else
                {
                    if(have(j,k))
                        flag+=i;
                }
            }
        }
        printf("%lld\n",flag);
    }
    return 0;
}

/**************************************************************
	Problem: 1118
	User: 201701060705
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

