#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[30000];
int twoinsamekey(char a,char b)
{
	int aa=a,bb=b;
//	printf("\n+++%d ___%d+++\n",aa,bb);
//	printf("\n+++%d ___%d+++\n",aa/3,bb/3);
	if(a<'P'&&b<'P')
	{
		if((a>='A'&&a<='C'&&b>='A'&&b<='C')
        ||(a>='D'&&a<='F'&&(b>='D'&&b<='F'))
        ||(a>='G'&&a<='I'&&b<='I'&&b>='G')
        ||(a>='J'&&a<='L'&&b<='L'&&b>='J')
        ||(a>='M'&&a<='O'&&b>='M'&&b<='O'))
			return 1;
		else
			return 0;
	}
	else
	{
		if(a-b>3||b-a>3)
			return 0;
		if((a>='P'&&a<='S'&&b<='S'&&b>='P')||(a>='T'&&a<='V'&&b>='T'
				&&b<='V')||(a>='W'&&b>='W'))
			return 1;
	}
	return 0;
}
int oneinkey(char c)
{
	if(c==' '||c=='A'||c=='D'
		||c=='G'||c=='J'||c=='M'
		||c=='P'||c=='T'||c=='W')
		return 0;
	else if(c=='B'||c=='E'||c=='H'
		||c=='K'||c=='N'||c=='Q'
		||c=='U'||c=='X')
		return 1;
	else if(c=='C'||c=='F'||c=='I'
		||c=='L'||c=='O'||c=='R'
		||c=='V'||c=='Y')
		return 2;
	else
		return 3;
}
int main()
{
	while(fgets(s,30000,stdin)!=NULL)
	{
		int before=0,i;
		int len=strlen(s);
		if(s[0]>='A'&&s[0]<='C'){
			before=2;
			printf("2");
		}
		else if(s[0]>='D'&&s[0]<='F'){
			before=3;
			printf("3");
		}
		else if(s[0]>='G'&&s[0]<='I'){
			before=4;
			printf("4");
		}
		else if(s[0]>='J'&&s[0]<='L'){
			before=5;
			printf("5");
		}
		else if(s[0]>='M'&&s[0]<='O'){
			before=6;
			printf("6");
		}
		else if(s[0]>='P'&&s[0]<='S'){
			before=7;
			printf("7");
		}
		else if(s[0]>='T'&&s[0]<='V'){
			before=8;
			printf("8");
		}
		else if(s[0]>='W'&&s[0]<='Z'){
			before=9;
			printf("9");
		}
		else if(s[0]==' ')
			printf("0");
		if(oneinkey(s[0]))
		{
			int j;
			for(j=0;j<oneinkey(s[0]);j++)
				printf("%d",before);
		}
		for(i=1;i<len-1;i++)
		{
			if(s[i]==' '){
				printf("0");
				continue;
			}
			if(twoinsamekey(s[i],s[i-1]))
			{
				printf("1");
				//i-=1;
			}
			if(s[i]>='A'&&s[i]<='C')
			{
				before=2;
				printf("2");
			}
			else if(s[i]>='D'&&s[i]<='F'){
				before=3;
				printf("3");
			}
			else if(s[i]>='G'&&s[i]<='I'){
				before=4;
				printf("4");
			}
			else if(s[i]>='J'&&s[i]<='L'){
				before=5;
				printf("5");
			}
			else if(s[i]>='M'&&s[i]<='O'){
				before=6;
				printf("6");
			}
			else if(s[i]>='P'&&s[i]<='S'){
				before=7;
				printf("7");
			}
			else if(s[i]>='T'&&s[i]<='V'){
				before=8;
				printf("8");
			}
			else if(s[i]>='W'&&s[i]<='Z'){
				before=9;
				printf("9");
			}
			if(oneinkey(s[i]))
			{
				int j;
				for(j=0;j<oneinkey(s[i]);j++)
				{
					printf("%d",before);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

/**************************************************************
	Problem: 1490
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:776 kb
****************************************************************/

