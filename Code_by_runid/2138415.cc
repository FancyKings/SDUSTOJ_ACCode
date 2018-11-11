#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 200
int ina[MAX_SIZE][MAX_SIZE],inb[MAX_SIZE][MAX_SIZE];
int save[MAX_SIZE][MAX_SIZE];

int main()
{
    int m,n,x,y;
    scanf("%d %d",&x,&y);
    int i,j;
    memset(ina,0,sizeof(ina));
    if(x&&y)
    {
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
                scanf("%d",&ina[i][j]);
        }
    }
    else
        return 0;
    while(~scanf("%d %d",&m,&n))
    {
        if(m&&n)
        {
            memset(inb,0,sizeof(inb));
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                    scanf("%d",&inb[i][j]);
            }
        }
        else
            return 0;
        if(y==m)
        {
            memset(save,0,sizeof(save));
            int k=0,sum=0;
            for(i=0; i<x; i++)
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<y; k++)
                    {
                        sum+=ina[i][k]*inb[k][j];
                    }
                    save[i][j]=sum;
                    sum=0;
                }
            }
            for(i=0; i<x; i++)
            {
                printf("%d",save[i][0]);
                ina[i][0]=save[i][0];
                for(j=1; j<n; j++)
                {
                    printf(" %d",save[i][j]);
                    ina[i][j]=save[i][j];
                }
                printf("\n");
            }
            printf("\n");
            y=n;
        }
        else
        {
            printf("Not satisfied the definition of matrix multiplication!\n\n");
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                    ina[i][j]=inb[i][j];
            }
            memset(inb,0,sizeof(inb));
            x=m;y=n;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1055
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:1216 kb
****************************************************************/

