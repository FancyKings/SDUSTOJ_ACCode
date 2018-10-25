#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int get_int_sum(int * a ,int * b)
{
    int x,y;
    scanf("%d %d",&x,&y);
    *a=x;*b=y;
    return x+y;
}

int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);

    }
    return 0;
}
/**************************************************************
	Problem: 1236
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

