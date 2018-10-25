#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_SIZE 10000

int get_array(int a[], int n)
{
    int * p;
    p=a;
    int cnt=0,x,i=0;
    while(n--)
    {
        scanf("%d",&x);
        *(p+i)=x;
        cnt++;
        i++;
    }
    return cnt;
}

int min_index(int a[], int n)
{
    int * p;
    p=a;
    int i,min=2147483647,temp=0;
//    printf("%d\n",n);
    for(i=0;i<n;i++)
        if(*(p+i)<min)
        {
//            printf("^%d\n",i);
            min=*(p+i);
            temp=i;
        }
    return temp;
}



int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}

/**************************************************************
	Problem: 1155
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

