#include <stdio.h>
#include <stdlib.h>
#define MAX 20000

int main()
{
    unsigned int x;
    while(~scanf("%u",&x))
    {
        if(x==0)
        {
            printf("0\n");
            continue;
        }
        int j,flag=0;
        for(j=16; j >= 0; j--)
        {
            if ( x & ( 1 << j) )
            {
                printf("1");
                flag++;
            }
            else
            {
                if(flag)
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1039
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

