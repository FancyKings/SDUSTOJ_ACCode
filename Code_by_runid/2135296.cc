#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 10000

int max(int a,int b)
{
    return ((a>b)?a:b);
}

void init_seq(int s[],int n)
{
    int i;
    for(i=0; i<n; i++)
        s[i]=0;
}

int get_seq(int s[])
{
    int num;
    scanf("%d",&num);
    int i;
    for(i=0; i<num; i++)
        scanf("%d",&s[i]);
    return num;
}

void put_seq(int s[], int n)
{
    if(n)
    {
        int i;
        printf("%d",s[0]);
        for(i=1; i<n; i++)
        {
            printf(" %d",s[i]);
        }
    }
    printf("\n");
}

void add_seq(int s[], int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        s[i]+=a[i];
    }
}


int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;

    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
/**************************************************************
	Problem: 1249
	User: 201701060705
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:756 kb
****************************************************************/

