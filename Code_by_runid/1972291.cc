#include<stdio.h>
int main()
{
    int m=0,max=0,min=0,n=0;
    scanf("%d",&n);
    scanf("%d",&max);
    min=max;n--;
    while(n--)
    {
        scanf("%d",&m);
        if(m>=max)
        {
            max=m;
        }
        if(m<=min)
        {
            min=m;
        }
    }
    printf("The maximum number is %d.\nThe minimum number is %d.\n",max,min);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

