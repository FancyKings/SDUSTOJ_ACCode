#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int now=0,i,flag=1,s,d,e;
    scanf("start = %d, step = %d, end = %d",&s,&d,&e);
    for(i=0; d>0; i++)
    {
        now=s+d*i;
        if(now>e)
        {
            break;
        }
        else
        {
            if(flag)
            {
                printf("%d",now);
                flag=0;
            }
            else
            {
                printf(" %d",s+d*i);
            }
        }

    }
    for(i=0; d<0; i++)
    {
        now=s+d*i;
        if(now<e)
        {
            break;
        }
        else
        {
            if(flag)
            {
                printf("%d",now);
                flag=0;
            }
            else
            {
                printf(" %d",s+d*i);
            }
        }

    }

    return 0;
}

/**************************************************************
	Problem: 1091
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

