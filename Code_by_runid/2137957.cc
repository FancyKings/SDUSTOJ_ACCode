#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500
int ina[MAX_SIZE][MAX_SIZE],inb[MAX_SIZE][MAX_SIZE];

int main()
{
    int m,n,x,y,flag=0;
    while(~scanf("%d %d",&m,&n))
    {
        int i,j;
        if(m&&n)
        {
            flag++;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    scanf("%d",&ina[i][j]);
                }
            }
        }
        else
            return 0;
        scanf("%d %d",&x,&y);
        if(x&&y)
        {
            flag++;
            for(i=0; i<x; i++)
            {
                for(j=0; j<y; j++)
                {
                    scanf("%d",&inb[i][j]);
                }
            }
        }
        else
            return 0;
        if(!(flag&1))
        {
            if(x==m&&n==y)
            {
                for(i=0;i<m;i++)
                {
                    printf("%d",ina[i][0]+inb[i][0]);
                    for(j=1;j<n;j++)
                    {
                        printf(" %d",ina[i][j]+inb[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            else
            {
                printf("Not satisfied the definition of matrix addition!\n\n");
            }
        }
        else
        {
            if(x!=m||y!=n)
                printf("Not satisfied the definition of matrix addition!\n\n");
        }
        memset(ina,0,sizeof(ina));
        memset(inb,0,sizeof(inb));
    }
    return 0;
}

/**************************************************************
	Problem: 1054
	User: 201701060705
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:2700 kb
****************************************************************/

