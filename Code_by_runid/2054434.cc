#include <stdio.h>
#include <stdlib.h>
//#define MAX 100100
//int a[MAX];

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int x;
        if(n)
        {
            int max=0,min=2147483647;
            while(n--)
            {
                scanf("%d",&x);
                if(x>max)
                    max=x;
                if(x<min)
                {
                    min=x;
//                    printf("%d\n",min);
                }

            }
//            printf("%d %d\n",max,min);
            printf("%d\n",2*(max-min));
        }
        else
            return 0;
    }
    return 0;
}

/**************************************************************
	Problem: 1119
	User: 201701060705
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

