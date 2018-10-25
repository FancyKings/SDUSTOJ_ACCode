#include <stdio.h>
#include <stdlib.h>
#define MAX 2000
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
    int j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int flag=0;
    for(i=0; i<n; i++)
    {
        if(!flag)
        {
            printf("%d",a[i]);
            flag++;
        }
        else
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:756 kb
****************************************************************/

