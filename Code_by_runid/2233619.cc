#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int num;
    while(~scanf("%d",&num))
    {
        int i;
        for(i=0; i<num; i++)
        {
            int j;
            for(j=0; j<num-1-i; j++)
            {
                printf(" ");
            }
            for(j=0; j<2*i+1; j++)
            {
                if(i+1>9)
                    printf("%d",(i+1)%10);
                else
                    printf("%d",i+1);
            }
            printf("\n");
        }
    }
}

/**************************************************************
	Problem: 1165
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

