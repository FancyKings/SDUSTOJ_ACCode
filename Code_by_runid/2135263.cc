#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 400

void get_matrix(int in[200][200],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&in[i][j]);
    }
}

void mul_matrix(int pr[200][200], int m1[200][200], int m2[200][200], int m, int n, int q)
{
    int i,j,sum=0,k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<n;k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            pr[i][j]=sum;
            sum=0;
        }
    }
}

void put_matrix(int ma[200][200], int m, int n)
{
    int i=0,j=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
                printf("%d",ma[i][j]);
            else
                printf(" %d",ma[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
 
    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);
 
    return 0;
}
/**************************************************************
	Problem: 1286
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:2548 kb
****************************************************************/

