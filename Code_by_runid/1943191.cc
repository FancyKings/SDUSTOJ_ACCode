#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            printf("%d\n",a+b);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1022
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

