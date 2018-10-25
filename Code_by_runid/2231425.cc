#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[10000];
int main()
{
	while(~scanf("%s",s))
	{
		int len=strlen(s),i,flag=0,sum=0;
		for(i=0;i<len;i++)
		{
			if(!flag&&s[i]!='0'){
				flag++;
			}
			if(flag)
			{
				sum++;
			}
		}
		if(!sum)
			printf("1\n");
		else
			printf("%d\n",sum);
		sum=0;
		memset(s,0,sizeof(s));
	}
	return 0;
}
/**************************************************************
	Problem: 1171
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

