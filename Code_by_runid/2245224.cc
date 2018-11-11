#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 10000
int main()
{
    int m,n;
    while(~scanf("%d/%d",&m,&n))
    {
        int integer=m/n;
        m=m-integer*n;
        int i=2;
        for(;i<=m&&i<=n;)
        {
            if(m%i==0&&n%i==0)
            {
                m/=i;
                n/=i;
            }
            else
            {
                i++;
            }
        }
        if(m==0)
            printf("%d\n",integer);
        else if(integer)
            printf("%d+%d/%d\n",integer,m,n);
        else
            printf("%d/%d\n",m,n);
    }
    return 0;
}

/**************************************************************
	Problem: 1503
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

