#include <stdio.h>
#include <stdlib.h>

int is_daffodil(int n)
{
    int a=n%10,b=n/10%10,c=n/100;
    if(n>999||n<100)
        return 0;
    if(a*a*a+b*b*b+c*c*c==n)
        return 1;
    else
        return 0;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
/**************************************************************
	Problem: 1278
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

