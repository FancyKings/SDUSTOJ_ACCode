#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int a,b,flag=0;
    char k='0';
    while(1)
    {
        scanf("%d",&a);
        k=getchar();
        scanf("%d",&b);
        if(a==0&&b==0&&k==' ')
        {
//          printf("0\n");
            return 2;
        }
        switch(k)
        {
        case '+' :
            printf("%d\n",a+b);
            break;
        case '-' :
            printf("%d\n",a-b);
            break;
        case '*' :
            printf("%d\n",a*b);
            break;
        case '/' :
            printf("%d\n",a/b);
            break;
        case '%' :
            printf("%d\n",a%b);
            break;
        default :
            printf("invalid op\n");
            break;

        }

    }
    return 0;
}

/**************************************************************
	Problem: 1026
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

