#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Octal Decimal Hexadecimal\n");
    printf("%-6o%-8d%-x\n",x,x,x);
    printf("%-6o%-8d%-x",y,y,y);
    return 0;

}

/**************************************************************
	Problem: 1158
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

