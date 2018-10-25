#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int put_int_sum(int a, int b)
{
    if(a==0&&b==0)
    {
        return 0;
    }
    else
    {
        printf("%d\n",a+b);
    }
}
int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
/**************************************************************
	Problem: 1240
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

