#include<stdio.h>
#include<math.h>
int main()
{
    int x,zl;
    scanf("%d",&x);;
    zl=100-x;
    printf("$20 bills: %d\n",zl/20);
    printf("$10 bills: %d\n",(zl%20)/10);
    printf(" $5 bills: %d\n",((zl%20)%10)/5);
    printf(" $1 bills: %d\n",((zl%20)%10)%5);

    return 0;
}

/**************************************************************
	Problem: 1013
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

