#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int print_graphic(int n, char c)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            printf(" ");
        for(j=1; j<=2*i-1; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}



int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

