#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int digit_sum(int num)
{
    int sum=num,sun;
    do
    {
        sun=0;
        int t;
        for(t=sum;t>0;t/=10)
        {
            sun+=t%10;
            sum=sun;
        }
    }while(sum>=10);
    return sun;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

