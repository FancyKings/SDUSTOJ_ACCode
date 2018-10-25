#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 10000
char in[MAX_SIZE];
void str_remove(char * a)
{
	int now=0,i,length=strlen(a);
	for(i=0;i<length;i++)
	{
		if(isalpha(a[i])||isdigit(a[i]))
		{
			if(a[i]>='A'&&a[i]<='Z')
			  a[i]+=32;
			a[now++]=a[i];
		}
	}
	a[now]='\0';
}

int main()
{
	while(fgets(in,MAX_SIZE,stdin)!=NULL)
	{
		str_remove(in);
		int length=strlen(in);
		int i=0,j=length-1,flag=0;
		for(i=0;i<length/2;i++)
		{
			if(in[i]!=in[j--])
			{
				flag=1;
				break;
			}
		}
		if(flag)
		  printf("No.\n");
		else
		  printf("Yes.\n");
		memset(in,0,MAX_SIZE);
	}
	return 0;
}
/**************************************************************
	Problem: 1061
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

