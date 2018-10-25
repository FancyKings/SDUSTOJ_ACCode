#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        int i;
        i=a;a=b;b=i;
    }
    if(a>c)
    {
        int i;
        i=a;a=c;c=i;
    }
    if(b>c)
    {
        int i;
        i=b;b=c;c=i;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}

/**************************************************************
	Problem: 1018
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

