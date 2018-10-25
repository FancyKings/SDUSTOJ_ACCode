#include<stdio.h>
#define MAX_STR_LEN 1000

void print_graphic(int n)
{
    int i , j ;
    for(i = 0 ; i < n ; i++)//head
    {
        printf("*");
    }
    printf("\n");
    for(i = 0 ; i < (n-1)/2 -1; i++)//body1
    {
        for(j = 0 ; j <(n-1)/2-i; j++)
        {
            printf("*");
        }
        for(j = 0 ; j < 2*i+1; j++)
        {
            printf(" ");
        }
        for(j = 0 ; j < (n-1)/2 - i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 0 ; i < 1 ; i++)//hong
    {
        printf("*");
        for(j = 0 ; j < 2*(n/2)-1; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i = 0 ; i < (n-1)/2-1; i++)//body2
    {
        for(j = 0 ; j <2+i; j++)
        {
            printf("*");
        }
        for(j = 0 ; j < n-4-2*i; j++)
        {
            printf(" ");
        }
        for(j = 0 ; j < 2 + i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 0 ; i < n ; i++)//tail
    {
        printf("*");
    }

}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

