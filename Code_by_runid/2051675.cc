#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(n)
        {
            n-=1;
            int h,m,s;
            h=n/3600;
            m=(n-h*3600)/60;
            s=(n-h*3600-m*60)%60;
            printf("%02d:%02d:%02d\n",h,m,s);
        }
        else
            return 0;
    }
    return 0;
}

/**************************************************************
	Problem: 1244
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

