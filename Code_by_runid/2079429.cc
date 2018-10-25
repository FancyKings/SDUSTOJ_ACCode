#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Case=1;
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        printf("case %d:",Case++);
        int i,j,flag=0;
        for(i=a;i<=b;i++)
        {
            for(j=i+1;j<=b;j++)
            {
                int c=sqrt(i*i+j*j);
                if(c<=b&&c*c==i*i+j*j)
                {
                    if(!flag){
                        printf("%d,%d,%d",i,j,c);
                        flag++;}
                    else
                        printf(";%d,%d,%d",i,j,c);
                }
            }
        }
        if(!flag)
            printf("No pythagorean triple");
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1226
	User: 201701060705
	Language: C
	Result: Accepted
	Time:380 ms
	Memory:756 kb
****************************************************************/

