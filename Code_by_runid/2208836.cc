#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    freopen("t.txt","w",stdout);
    int m;
    while(~scanf("%d",&m))
    {
        int i,j;
        m-=1;
        for(i=-m;i<=m;i++)
        {
            int t=1;
            for(j=-m;j<=m;j++)
            {
                if(abs(i)+abs(j)<=m&&j<0)
                {
                    printf("%d",t++);
                }
                else if(abs(i)+abs(j)<=m&&j>=0)
                {
                    printf("%d",t--);
                }
                else if(abs(i)+j>m)
                {
                    break;
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1457
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

