#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get_num(int * a, int * b, int * c)
{
    scanf("%d %d %d",a,b,c);

}
void max_min(int * max, int * min , int a, int b, int c)
{
    int a1[8];
    a1[0]=a;a1[1]=b;a1[2]=c;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(a1[j+1]<a1[j])
            {
                int t=a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=t;
            }
        }
    }
    *max = a1[2];*min= a1[0];
}

int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}

/**************************************************************
	Problem: 1382
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

