#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[120][120];
int main()
{
    int CASE=0;
    int num;
    scanf("%d",&num);
    while(num--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int i,j;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("case %d:",++CASE);
        double sum=0;
        for(i=0;i<y;i++)
        {
            for(j=0;j<x;j++)
                sum+=a[j][i];
            if(i)
            printf(" %lg",sum/x);
            else
                printf("%lg",sum/x);
            sum=0;
        }
        printf("\n");
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1593
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:804 kb
****************************************************************/

