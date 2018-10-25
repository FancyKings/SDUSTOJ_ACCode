#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10000
int all=0;
int getkey(int key[])
{
    memset(key,0,sizeof(key));
    int num;
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++)
        scanf("%d",&key[i]);
    return num;
}

void move(int i,int a[],int key)
{
    int j;
    for(j=all;j>i;j--)
        a[j]=a[j-1];
    a[i]=key;
}

void getarray(int array[])
{
    memset(array,0,sizeof(array));
    int x,i=0;
    while(~scanf("%d",&x)&&x)
        array[i++]=x;
    all=i;
}

int insert(int array[], int key, int vol)
{
    int i,flag=1,point=0;
    if(all>=1000)
    {
        flag=0;
        point = -9;
    }
    for(i=0;flag&&i<all;i++)
    {
        if(array[i]==key)
        {
            point = -1;
            break;
        }
        if(array[i]>key)
        {
            point = i;
            move(i,array,key);
            all+=1;
            break;
        }
    }
    if(flag&&array[all-1]<key)
    {
        point = all;
        array[all++]=key;
    }
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
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}

/**************************************************************
	Problem: 1141
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:752 kb
****************************************************************/

