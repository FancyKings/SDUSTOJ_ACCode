#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    unsigned long long k = 0;
    while(scanf("%llu",&k)!=EOF)
    {
        if(k == 1)
        {
            printf("471\n");
        }
        else
        {
            printf("%llu471\n",k-1);
        }
    }
    return 0;
}





/*
int main()
{
    FILE *f;
    f=fopen("shengunquan.txt","w");
    unsigned long long Case = 1, i = 0, tmp = 0, t = 0;
    for (i = 0; i <= 10000000; i++)
    {
        tmp=i*i*i;
        if(tmp%1000==111)
        {
            fprintf(f,"%llu\t%llu\t%llu\n",Case,tmp,i);
            Case++;
        }
    }
    fclose(f);
    return 0;
}

*/

/**************************************************************
	Problem: 1047
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

