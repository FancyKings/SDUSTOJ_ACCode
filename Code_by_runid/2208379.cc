#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int m,n;
    while(~scanf("%d",&m)&&scanf("%d",&n))
    {
        int begin = (m>n) ? n : m;
        int end = (m>n) ? m : n;
        int i;
        long long sum = 0;
        for (i = begin; i <= end; i++)
        {
            if(i%4 == 0 &&i%6 == 0)
            {
                sum += i;
            }
        }
        printf("%lld\n",sum);
    }
	return 0;
}

/**************************************************************
	Problem: 1269
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

