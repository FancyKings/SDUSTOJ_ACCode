#include <stdio.h>
#include <stdlib.h>
#define MAX 20000
int a[MAX];
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int temp=n;
    while(temp--)
    {
        scanf("%d",&a[i++]);
    }
    while(~scanf("%d",&i))
    {
        int k;
        int flag=0;
        for(k=0;k<n;k++)
        {
            if(a[k]==i)
            {
                if(!flag)
                {
                    printf("%d",k+1);
                    flag++;
                }
                else
                {
                    printf(" %d",k+1);
                }
            }
        }
        if(!flag)
        {
            printf("NOT FOUND\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1462
	User: 201701060705
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:824 kb
****************************************************************/

