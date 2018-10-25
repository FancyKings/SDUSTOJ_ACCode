#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int a[100000]= {0},n=0;
    scanf("%d",&n);
    int i=0;
    for(; i<n; i++)
        scanf("%d",&a[i]);
    int se=0;
    while(scanf("%d",&se)!=EOF)
    {
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==se)
            {
                printf("%d\n",i+1);
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("NOT FOUND\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1459
	User: 201701060705
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:1068 kb
****************************************************************/

