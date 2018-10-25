#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#define MAX_STR_LEN 200
double strToDouble(char s[])
{
    double sum=0,x=0,shi=0;
    int i,length=strlen(s),point=0;
    for(i=0;i<length;i++)
    {
        if(s[i]=='.')
        {
            point=i;
            break;
        }
        if(i==length-1&&s[i]!='.')
        {
            point=length;
        }
    }
    int power=1;
    for(i=point-1;i>=0;i--)
    {
        if(isdigit(s[i]))
        {
            shi+=power*(s[i]-'0');
            power*=10;
        }
    }
    power=1;
    int xb=0;
    for(i=length-1;i>point;i--)
    {
        if(isdigit(s[i]))
        {
            xb+=1;
            x+=power*(s[i]-'0');
            power*=10;
        }
    }
//    printf("%lf %lf %d %lf\n",shi,x,xb,sum);
    while(xb--)
    {
        x/=10;
    }
    sum=shi+x;
//    printf("%lf %lf %d %lf\n",shi,x,xb,sum);
    for(i=0;i<length;i++)
    {
        if(isdigit(s[i]))
        {
            break;
        }
        else
        {
            if(s[i]=='+'||s[i]=='.')
                break;
            if(s[i]=='-')
            {
                sum=-sum;
                break;
            }
        }
    }
    return sum;
}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1188
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

