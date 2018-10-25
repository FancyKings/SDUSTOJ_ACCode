#include <stdio.h>
#include <stdio.h>

int search(int x,int y)
{
        int i,cnt=0;
        for(i=y; i>=x; i--)
        {
            int temp=i;
            while(temp>10)
            {
                if(temp%10==6)
                {
                    cnt++;
                    break;
                }
                else
                {
                    temp/=10;
                }
            }
            if(temp==6)
            {
                cnt++;
            }
        }
        return cnt;
}

int main()
{
    int y;
    while(~scanf("%d",&y))
    {
        if(y<6)
            printf("0\n");
        else if(y<=10)
        {
            printf("1\n");
        }
        else if(y<=100)
        {
            printf("%d\n",1+search(10,y));
        }
        else if(y<=1000)
        {
            printf("%d\n",19+search(100,y));
        }
        else if(y<10000)
        {
            printf("%d\n",271+search(1000,y));
        }
        else if(y<=100000)
        {
            printf("%d\n",3439+search(10000,y));
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2154
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

