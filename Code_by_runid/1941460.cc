#include <stdio.h>
int main()
{
    int x,y,z,a,b,c,d;
    scanf("%d %d %d %d %d %d %d",&x,&y,&z,&a,&b,&c,&d);
    if(b>=x&&c>=y&&d>=z&&(d+b+c)>=a)
    {
        printf("congratulations");
    }
    else
    {
        printf("sorry");
    }
    return 0;
}

/**************************************************************
	Problem: 1404
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

