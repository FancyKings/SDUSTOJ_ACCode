#include<stdio.h>
int main()
{
    int m=0,Case=1;
    scanf("%d",&m);
    while(m--)
    {
        int sum=0,i=0;
        scanf("%d",&i);
        while(i--)
        {
            int y=0;
            scanf("%d",&y);
            if(y%2==0)
            {
                sum+=y;
            }
            else
            {
                sum+=y+1;
            }
        }
        printf("Case %d: %d\n",Case,sum);
        Case++;
    }
    return 0;
}

/**************************************************************
	Problem: 1420
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

