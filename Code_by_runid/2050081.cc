#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20000

int a[MAX]= {0};

int main()
{
//    FILE *f;
//    f=fopen("ceshi.txt","w");
    int y=0;
    while(~scanf("%d",&y))
    {
        int now=0,cnt=0,cmp=y;
        while(y--)
        {
            scanf("%d",&now);
            if(now>=0)
            {
                a[now]++;
                if(a[now]==1)
                    cnt++;
            }
        }
        printf("%d\n",cnt);
        int i,flag=0;
        for(i=0; i<=MAX; i++)
        {
            if(a[i]&&flag)
            {
                printf(" %d",i);
            }
            if(!flag&&a[i])
            {
                printf("%d",i);
                flag++;
            }
        }
        if(cmp)
        {
            printf("\n");
        }
        memset(a,0,sizeof(a));

    }
    return 0;
}

/**************************************************************
	Problem: 2150
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:876 kb
****************************************************************/

