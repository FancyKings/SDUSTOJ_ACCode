#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[2000];
int CASE = 0;
int main()
{
    //freopen("t.txt","w",stdout);
    int t;
    scanf("%d",&t);
    {
        while(t--)
        {
            if(CASE++)
                printf("\n",CASE);
            int q , i;
            scanf("%d",&q);
            for(i=0;i<q;i++)
                scanf("%d",&a[i]);
            int m,n;
            scanf("%d %d",&m,&n);
            int flag = 0;
            for(i=0;i<q;i++)
            {
                if(flag == 0)
                {
                    printf("%2d",a[i]);
                    flag++;
                }
                else
                {
                    if(flag==n)
                    {
                        printf("\n");
                        flag=0;
                        i-=1;
                    }
                    else
                    {
                        printf(" %2d",a[i]);
                        flag++;
                    }
                }
            }
            printf("\n");
        }
    }
	return 0;
}

/**************************************************************
	Problem: 1770
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

