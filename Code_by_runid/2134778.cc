#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10000

int all=0;
void getarray(int array[])
{
    memset(array,0,sizeof(array));
    int i=0;
    int x;
    while(scanf("%d",&x)&&x)
    {
        array[i++]=x;
    }
    all=i;
}
int insert(int array[], int key, int vol)
{
    int i=0,flag=1,point=0;
    if(all>=1000)
    {
        flag=0;
        point = -9;
    }
    for(i=0;flag&&i<all;i++)
    {
        if(array[i]>key)
        {
            point = i;
            break;
        }
        if(array[i]==key)
        {
            point = -1;
            break;
        }
    }
    if(array[all-1]<key)
        point = all;
    all=0;
    return point;
}
void result(int flag)
{
    if(flag>=0)
        printf("The key is inserted in position %d.\n",flag);
    if(flag==-1)
        printf("The key is already in this array!\n");
    if(flag==-9)
        printf("The array if full!\n");
}


int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}
/**************************************************************
	Problem: 1140
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

