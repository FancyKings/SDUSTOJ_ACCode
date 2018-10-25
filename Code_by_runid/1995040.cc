#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n,py=0;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    int i=0,day=1,flag=0;
    int fkg=0;
    for(fkg=0; fkg<n; fkg++)
    {
        if(n<7&&n>0)
        {
            char kg=' ';
            printf("%3c",kg);
            if(fkg<n-1)
            {
                printf(" ");
            }
            flag++;
        }
        else
        {
            py=1;
        }

    }
    for(day=1; day<=30; day++)
    {
        if(py)
        {
            printf("%3d",day);
            py=0;
        }
        else
        {
            printf(" %3d",day);
        }
        flag++;
        if((flag%7)==0)
        {
            printf("\n");
            flag=0;
            py=1;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1100
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

