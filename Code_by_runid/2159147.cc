#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_swapped(int * a, int * b)
{
    if(*a==*b)
    {
        return 0;
    }
    else if(*a>*b)
    {

        int t=*a;
        *a=*b;
        *b=t;
        return 1;

    }
    else if(*a<*b)
        return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(is_swapped(&a, &b))
        printf("%d %d YES", a, b);
    else
        printf("%d %d NO", a, b);
}
/**************************************************************
	Problem: 1201
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

