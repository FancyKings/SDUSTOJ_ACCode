#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 1000
int a[MAX][MAX];
int b[MAX];
char s[10];
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    while(~scanf("%s",s))
    {
        int m,n,flag=0;
        scanf("%d %d",&m,&n);
        int max = (m>n)?m:n,
            min = (m>n)?n:m;
        if(s[0]=='l')
        {
            for(i=0; i<x; i++)
            {
                if(i==min)
                {
                    for(j=0; j<y; j++)
                        b[flag++]=a[i][j];
                }
                else if(i==max)
                {
                    for(j=0; j<y; j++)
                    {
                        a[min][j]=a[max][j];
                        a[max][j]=b[j];
                    }
                }
            }
        }
        memset(b,0,sizeof(b));
        flag = 0;
        int change=0;
        if(s[0]=='r')
        {
            for(i=0; i<x; i++)
            {
                for(j=0; j<y; j++)
                {
                    if(j==min)
                    {
                        change=a[i][j];
                    }
                    else if(j==max)
                    {
                        a[i][min]=a[i][max];
                        a[i][max]=change;
                    }
                }
            }
        }
        for(i=0; i<x; i++)
        {
            printf("%d",a[i][0]);
            for(j=1; j<y; j++)
            {
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1634
	User: 201701060705
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:4656 kb
****************************************************************/

