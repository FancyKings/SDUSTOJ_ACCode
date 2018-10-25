#include<stdio.h>



int main()
{
    unsigned long long k = 0;
    while(scanf("%llu",&k)!=EOF)
    {
        if(k == 1)
        {
            printf("471\n");
        }
        else
        {
            printf("%llu471\n",k-1);
        }
    }
    return 0;
}



/**************************************************************
	Problem: 1047
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

