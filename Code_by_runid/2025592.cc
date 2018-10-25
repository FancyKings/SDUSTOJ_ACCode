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
        if(se>n||se<1)
            printf("OUT OF RANGE\n");
        else
            printf("%d\n",a[se-1]);
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:1068 kb
****************************************************************/

