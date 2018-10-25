#include<stdio.h>
int main()
{
    unsigned long long n;
    scanf("%llu",&n);
    if(n%2==0)
    {
        printf("%llu\n",(n/2)*(n+1));
    }
    else
    {
        printf("%llu\n",((n+1)/2)*n);
    }
    return 0;
}
/**************************************************************
	Problem: 1015
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

