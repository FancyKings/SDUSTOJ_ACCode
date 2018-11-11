#include <stdio.h>
#define P 3.14159
int main()
{
    int m,n;
    int num;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%d %d",&n,&m);
        int t = (m-(n*2))/2;
        int j = n - t;
        double a=((m-(n*2))/2.0);
        if(a!=(int)a)
            printf("no result\n");
        else if(j<0||t<0)
            printf("no result\n");
        else
            printf("%d %d\n",j,t);
    }
    return 0;
}

/**************************************************************
	Problem: 1763
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

