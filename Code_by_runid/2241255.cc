#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_nums(int *n)
{
    long long x;
    int l=0;
    while(~scanf("%lld",&x))
    {
        l+=1;
    }
    *n=l;
}


int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

