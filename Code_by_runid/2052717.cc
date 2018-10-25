#include <stdio.h>
#include <stdlib.h>
#define MAX 20000
int a[MAX];
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int temp=n;
    while(temp--)
    {
        scanf("%d",&a[i++]);
    }
    i=0;
    while(~scanf("%d",&i))
    {

            if(i>0)
            {
                if(i>n||i<0)
                    printf("OUT OF RANGE\n");
                else
                    printf("%d\n",a[i-1]);

            }
            else
            {
                if(i<-n||i>-1)
                    printf("OUT OF RANGE\n");
                else
                    printf("%d\n",a[n+i]);
            }
    }
    return 0;
}

/**************************************************************
	Problem: 1461
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:824 kb
****************************************************************/

