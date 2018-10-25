#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int get_array(int a[])
{
    int cnt=0,x;
    while(~scanf("%d",&x))
    {
        a[cnt++]=x;
    }
    return cnt;
}

int put_array(int a[], int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(!flag)
        {
            printf("%d",a[i]);
            flag++;
        }
        else
            printf(" %d",a[i]);
    }
}

int sort_array(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}



int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

