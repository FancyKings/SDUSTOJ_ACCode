#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10000
int getarray(int a[])
{
    int k;
    scanf("%d",&k);
    int i;
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    return k;
}
int find(int a[], int n, int val)
{
    int k;
    for(k=0;k<n;k++)
    {
        if(a[k]==val)
        {
            return k;
        }
    }
    return -1;
}

int main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}
/**************************************************************
	Problem: 1255
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

