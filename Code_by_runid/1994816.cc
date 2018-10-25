#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--)
    {
        int a=0,b=0,c=0;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)>c&&(a+c)>b&&(b+c)>a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1079
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

