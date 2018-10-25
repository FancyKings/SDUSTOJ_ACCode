#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
    }
    if(n>0)
    {
        int i=1,flag=0;
        for(i=1; i<=n; i++)
        {
            if(flag==0)
            {
                printf("%d",i);
                flag++;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    if(n<0)
    {
        int i=1,flag=0;
        for(i=n; i<=-1; i++)
        {
            if(flag==0)
            {
                printf("%d",i);
                flag++;
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1167
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

