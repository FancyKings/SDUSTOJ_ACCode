#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 10000
int strToInt(char * s)
{
	int sum=0,power=1;
	int i,length=strlen(s);
	if(!strlen(s)||isalpha(s[0])||(!isdigit(s[0])&&(s[0]!='+'&&s[0]!='-')))
	  return 0;
	for(i=1;i<length;i++)
	{
		if(!isdigit(s[i]))
		{
			break;
		}
	}
	for(i-=1;i>0;i--)
	{
		if(isdigit(s[i]))
		{	
			sum+=(s[i]-'0')*power;
			power*=10;
		}
	}
	if(isdigit(s[0]))
	  sum+=(s[0]-'0')*power;
	else
	{
		if(s[0]=='-')
		  sum=-sum;
	}
	return sum;
}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
/**************************************************************
	Problem: 1134
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

