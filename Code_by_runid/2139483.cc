#include<stdio.h>
#include<string.h>
int multiply(int a[200][200],int b[200][200],int m, int n,int q)
{
    int c[200][200];
    int i,j,k;
    for(i=0; i<m; i++)
        for(j=0; j<q; j++)
        {
            c[i][j]=0;
            for(k=0; k<n; k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    memset(a,0,sizeof(a));
    for(i=0; i<m; i++)
        for(j=0; j<q; j++)
            a[i][j]=c[i][j];
}
int main()
{
    int q,m,n,i,j,n1;
    int a[200][200],b[200][200],c[200][200];

    scanf("%d %d",&m,&n1);
    for(i=0; i<m; i++)
        for(j=0; j<n1; j++)
            scanf("%d",&a[i][j]);

    while(~scanf("%d %d",&n,&q))
    {
        if(n==0&&q==0)return 0;
        if(n==n1)
        {
            for(i=0; i<n; i++)
                for(j=0; j<q; j++)
                    scanf("%d",&b[i][j]);
            multiply(a,b,m,n,q);
            n1=q;
            for(i=0; i<m; i++)
            {
                if(n1!=0)
                    printf("%d",a[i][0]);
                for(j=1; j<n1; j++)
                    printf(" %d",a[i][j]);
                printf("\n");
            }
        }
        else
        {
            memset(a,0,sizeof(a));
            for(i=0; i<n; i++)
                for(j=0; j<q; j++)
                    scanf("%d",&a[i][j]);
            n1=q;m=n;
            printf("Not satisfied the definition of matrix multiplication!\n");
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 1055
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:1292 kb
****************************************************************/

