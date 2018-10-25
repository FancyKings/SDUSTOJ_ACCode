#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[200];
int main()
{
    int s,i=0,cnt=0;
    while(~scanf("%d",&s))
    {
        if(s>=0&&s<=100)
            {a[s]++;cnt++;}
    }
    int max=a[0];
    for(i=0;i<=100;i++)
    {
        if(a[i]>max)max=a[i];
    }
    for(i=0;i<=100;i++)
    {
        if(a[i]==max)
            printf("%d\n",i);
    }
    return 0;
}

/**************************************************************
	Problem: 1178
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

