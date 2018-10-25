#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int tmp=0;
int max=0;
int get_array(int a[])
{
    int cnt=0,x;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&a[cnt++]);
    }
    return cnt;
}

int put_array(int a[], int n)
{
    int flag=0,i=0;
    for(; i<n; i++)
    {
        if(!flag)
        {
            printf("%d",a[i]);
            flag++;
        }
        else
            printf(",%d",a[i]);
    }
}

int max_value(int a[], int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            tmp=i;
        }
    }
    return max;
}


int max_index(int idx[],int a[],int n)
{
    int i=0,cn=0;
    max_value(a,n);
    for(; i<n; i++)
    {
        if(a[i]==max)
            idx[cn++]=i;
    }
    return cn;
}




int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
/**************************************************************
	Problem: 1144
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

