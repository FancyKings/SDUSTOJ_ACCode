#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 1000
int strToInt(char * s)
{
	int sum=0,power=1;
	int length=strlen(s);
	if(!length)
	  return 0;
	else{
		int i=length-1;
		for(;i>0;i--)
		{
			if(isdigit(s[i]))
			{
				sum+=power*(s[i]-'0');
				power*=10;
			}
		}
		if(isdigit(s[0]))
		{
			sum+=(s[0]-'0')*power;
		}
		else{
			if(sum&&s[0]=='-')
			{
				sum=-sum;
			}
		}
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
	Problem: 1135
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

