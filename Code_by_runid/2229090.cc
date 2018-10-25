#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 1000
int a[MAX_SIZE][MAX_SIZE];
int cnt = 0;
int main()
{
    //freopen("t.txt","w",stdout);
    int h;
    while(~scanf("%d",&h))
    {
        if(cnt)
            printf("\n");
        int i,j;
        a[0][0]=1;
        a[1][0]=a[1][1]=1;
        for(i=2;i<h;i++)
        {
            a[i][0]=1;
            for(j=1;j<h-1;j++)
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
            a[i][j]=1;
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<2*(h-i-1);j++)
                printf(" ");
            for(j=0;j<i+1;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        cnt++;
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1633
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:4652 kb
****************************************************************/

