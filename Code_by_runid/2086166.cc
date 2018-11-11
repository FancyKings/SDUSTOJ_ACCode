#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10000
char a[MAX],max[MAX],min[MAX];
char* del(char a[],int n)
{
    char * p;
    int flag=0,i;
    for(i=0; i<n; i++)
    {
        if(a[i]!='0')
        {
            p=a+i;
            flag++;
            break;
        }
    }
    if(!flag)
    {
        p=a+n-1;
    }
    a=p;
//    printf("%c X%d Y%d Z%c\n",a,*a,p,*p);
    return a;
}
int main()
{
    scanf("%s",a);
    char * f;
    f=del(a,strlen(a));
//    printf("%s\t%s\n",f,a);
    strcpy(max,f);
    strcpy(min,f);
    while(~scanf("%s",a))
    {
        f=del(a,strlen(a));
//        printf("%s\t%s\n",f,a);
        if(strlen(f)==strlen(max))
        {
            if(strcmp(max,f)<0)
            {
//                printf("max%s\t%s\n",max,f);
                strcpy(max,f);
            }
        }
        else{
            if(strlen(f)>strlen(max))
                strcpy(max,f);
        }

        if(strlen(f)==strlen(min))
        {
            if(strcmp(min,f)>0)
            {
//                printf("min%s\t%s\n",min,f);
                strcpy(min,f);
            }
        }
        else{
            if(strlen(f)<strlen(min))
                strcpy(min,f);
        }
    }
    printf("The maximum value is : %s\n",max);
    printf("The minimum value is : %s\n",min);
    return 0;
}

/**************************************************************
	Problem: 1060
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:776 kb
****************************************************************/

