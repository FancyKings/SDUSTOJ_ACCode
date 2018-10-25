#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Case=1,x,y,n;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&x,&y);
        if((x+y)%2==0)
            printf("case %lld:sum=%lld.\n",Case++,((x+y)/2)*(y-x+1));
        else
            printf("case %lld:sum=%lld.\n",Case++,((y-x+1)/2)*(x+y));
    }
    return 0;
}

/**************************************************************
	Problem: 1145
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

