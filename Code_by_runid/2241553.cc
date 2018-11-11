#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int maxr;
    while(~scanf("%d",&maxr))
    {
        int num=0;
        int i=0;
        for(i=1;i<=maxr;i++)
        {
            if(i%3==1&&i%4==2&&i%5==3)
                printf("%d\n",i);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1275
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

