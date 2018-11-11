#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_SIZE 100000

int get_array(int a[])
{
    int n,cnt=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a[cnt]);
        cnt++;
    }
    return cnt;
}
int reverse_array(int a[],int n)
{
    int i,j=n;
    int b[MAX_SIZE];
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=0;i<n;i++)
    {
        a[i]=b[j-i-1];
    }
}
int put_array(int a[],int n)
{
    int i=0,flag=0;
    for(;i<n;i++)
    {
        if(!flag)
        {
            flag++;
            printf("%d",a[i]);
        }
        else
        {
            printf(" %d",a[i]);
        }
    }

    printf("\n");
}



int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
/**************************************************************
	Problem: 1153
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:1456 kb
****************************************************************/

