#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 10000
//char in[MAX_SIZE];

int strToInt(char  s[])
{
	int sum=0,power=1;
	int i,length=strlen(s);
	if(s[0]=="\r"||!strlen(s))
	  return -1;
    if(!isdigit(s[0]))
        return 0;
	for(i=0;i<length;i++)
	{
		if(!isdigit(s[i]))
		  break;
	}
	for(i-=1;i>=0;i--)
	{
		sum+=(s[i]-'0')*power;
		power*=10;
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
	Problem: 1133
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

