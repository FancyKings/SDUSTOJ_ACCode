#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Max(int x,int y)
{
    if(x>y){
//        printf("%d\n",x);
        return x;}
    else{
//        printf("%d\n",y);
        return y;}
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n][n];
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
                scanf("%d",&a[i][j]);
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<=i;j++)
                {
                    a[i][j]=Max(a[i+1][j],a[i+1][j+1])+a[i][j];
                }
        }
        printf("%d\n",a[0][0]);
    }
    return 0;
}

/**************************************************************
	Problem: 2140
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

