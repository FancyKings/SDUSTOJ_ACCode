#include <stdio.h>
#include <stdlib.h>

int digits(int num)
{
    int cnt=0;
    if(num<0)
        num=-num;
    while(num/10!=0)
    {
        cnt++;
        num/=10;
    }
    return cnt+1;
}


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

