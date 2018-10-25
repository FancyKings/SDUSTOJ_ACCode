#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int CASE = 0;
int main()
{
    int num;
    while(~scanf("%d" , &num))
    {
        int left;
        while (num--)
        {
            scanf("%d" , &left);
            int i;
            printf("case %d : ", ++CASE);
            for(i = 0; i < left ;i++)
            {
                printf("|");
            }
            printf("\n");
        }
        CASE = 0;
    }
	return 0;
}

/**************************************************************
	Problem: 1496
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

