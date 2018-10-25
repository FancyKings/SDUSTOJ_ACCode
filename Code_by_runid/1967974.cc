#include<stdio.h>
int main()
{
    int year=0;
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                printf("Yes");
            else
                printf("No");
        }
        else
        {
            printf("Yes");
        }

    }
    else
    {
        printf("No");
    }
    return 0;
}

/**************************************************************
	Problem: 1010
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

