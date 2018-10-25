#include <stdio.h>
#include <stdlib.h>
#define MAX 300000
int a[MAX];

int main()
{
    int n,i;
    scanf("%d",&n);
    int temp=n;
    while(n--)
    {
        scanf("%d",&i);
        a[i]++;
    }
    int max=0;
    for(i=0;i<MAX;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d\n",max);
    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201701060705
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:1920 kb
****************************************************************/

