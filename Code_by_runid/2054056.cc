#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int a[MAX];

int main()
{
    int y;
    while(~scanf("%d",&y))
    {
        int x,flag=1;
        for(x=y+1;; x++)
        {
            a[0]=x%10;
            a[1]=x/10%10;
            a[2]=x/100%10;
            a[3]=x/1000%10;
            a[4]=x/10000%10;
            if(a[4]<10) a[4]=-1;
            if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3]&&a[3]!=a[4]
               &&a[0]!=a[2]&&a[0]!=a[3]&&a[0]!=a[4]&&a[1]!=a[3]&&a[1]!=a[4]
               &&a[2]!=a[4])
            {
                printf("%d\n",x);
                break;
            }
//            int i,j;
//            for(i=0; i<4; i++)
//            {
//                for(j=i+1; j<5; j++)
//                {
//                    if(a[i]==a[j])
//                    {
//                        flag=0;
//                        break;
//                    }
//                }
//            }
//            if(flag==0)
//                continue;
//            else
//                break;
//
        }
//        if(flag)
//        {
//            printf("%d\n",x);
//        }
    }
    return 0;
}

/**************************************************************
	Problem: 1297
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

