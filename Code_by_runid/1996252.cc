#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a==0&&b!=0)
            printf("%d %d\n",b,a);
        else if(a!=0&&b==0)
            printf("%d %d\n",a,b);
        else
        {
             if(a<b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        int max = a, big = 0, small = 0, min = b, cmp = 1;
        while(cmp != 0)
        {
            cmp = max % min;
            max = min;
            min = cmp;
            big = max;
//            printf("%d\t%d\t%d\t\n",max,min,cmp);
        }
        small = (a * b) / big;
        printf("%d %d\n",big,small);
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1041
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

