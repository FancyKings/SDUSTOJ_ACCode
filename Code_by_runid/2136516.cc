#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500
int in[MAX_SIZE][MAX_SIZE],put[MAX_SIZE][MAX_SIZE];
void output(int x,int y)
{
    int i,j;
    for(i=0;i<y;i++)
    {
        printf("%d",in[0][i]);
        for(j=1;j<x;j++)
        {
            printf(" %d",in[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

void out()
{
    memset(in,0,sizeof(in));
    memset(put,0,sizeof(put));
    int x,y;
    scanf("%d %d",&x,&y);
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&in[i][j]);
        }
    }
    output(x,y);
}
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        out();
    }
    return 0;
}

/**************************************************************
	Problem: 1053
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:2700 kb
****************************************************************/

