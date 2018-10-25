#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int end(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*end(n-1);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    if(!n)
        printf("1");
    else
        printf("%d",end(n));
    return 0;
}

/**************************************************************
	Problem: 1384
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

