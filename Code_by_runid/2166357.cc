#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 100000
char in[MAX],out[MAX];
int main()
{
	int m=0;
	scanf("%d",&m);
	while(m--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		getchar();
		while(n--)
		{
			fgets(in,MAX,stdin);
			int length=strlen(in),i,now=0;
			for(i=0;i<length;i++)
			{
				if(isalpha(in[i]))
				{
					if(in[i]>='a'&&in[i]<='z')
					{
						in[i]-=32;
					}
					if(k>=0)
					{
						if(in[i]+k>'Z')
						  out[now++]=in[i]+k-26;
						else
						  out[now++]=(in[i]+k);
					}
					else
					{
						if(in[i]+k<'A')
						{
							out[now++]=in[i]+26+k;
						}
						else
						{
							out[now++]=in[i]+k;
						}
					}
				}
			}
			printf("%lu ",strlen(out));
			puts(out);
			memset(in,0,MAX);
			memset(out,0,MAX);
		}

			printf("\n");
	}
	return 0;
}

/**************************************************************
	Problem: 1062
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:944 kb
****************************************************************/

