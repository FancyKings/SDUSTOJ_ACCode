#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=0&&x<10)
    {
        printf("%d\n",x);
    }
    if(x>=10)
    {
        printf("%d",(x/10)%10);
        printf("%d",x%10);
        printf("\n");
    }
    if(x<0&&x>-10)
    {
        x=-x;
        printf("%d\n",x);
    }
    if(x<=-10)
    {
        x=-x;
        printf("%d",(x/10)%10);
        printf("%d",x%10);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

