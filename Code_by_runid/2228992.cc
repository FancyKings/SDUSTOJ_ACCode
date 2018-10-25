#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 200000
int a[MAX_SIZE];
int main()
{
    int num;
    scanf("%d",&num);
    while(num--)
    {
        int i,cnt;
        scanf("%d",&cnt);
        scanf("%d",&i);
        a[i]++;
        int max = a[i];
        for(i=1;i<cnt;i++)
        {
            int x;
            scanf("%d",&x);
            a[x]++;
            if(a[x]>max)
                max=a[x];
        }
        printf("%d",max);
        for(i=0;i<MAX_SIZE;i++)
        {
            if(a[i]==max)
            {
                printf(" %d",i);
            }
        }
        printf("\n");
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1767
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:1528 kb
****************************************************************/

