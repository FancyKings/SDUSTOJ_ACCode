#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 1000
int two(char * s)
{
	int sum=0,i,length=strlen(s),power=1;
	for(i=length-1;i>=0;i--)
	{
		if(s[i]=='0'||s[i]=='1')
		{
			sum+=(s[i]-48)*power;
			power*=2;
		}
	}
	if(s[0]=='-')
	  sum=-sum;
	return sum;
}
int ten(char * s)
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
int eight(char * s)
{
	int sum=0,length=strlen(s),i,power=1;
	for(i=length-1;i>=0;i--)
	{
		if(s[i]>='0'&&s[i]<='7')
		{
			sum+=(s[i]-'0')*power;
			power*=8;
		}
	}
	if(s[0]=='-')
	{
		sum=-sum;
	}
	return sum;
}
int sixteen(char * s)
{
	int sum=0,i,length=strlen(s),power=1;
	for(i=length-1;i>=0;i--)
	{
		if(isdigit(s[i])||(s[i]>='a'&&s[i]<='f')||(s[i]>='A'&&s[i]<='Z'))
		{
			if(isdigit(s[i]))
			{
				sum+=(s[i]-'0')*power;
				power*=16;
			}
			else
			{
				if(s[i]>='a'&&s[i]<='f')
				{
					s[i]-=32;
				}
				switch(s[i])
				{
					case 'A':{sum+=10*power;power*=16;break;}
					case 'B':{sum+=11*power;power*=16;break;}
					case 'C':{sum+=12*power;power*=16;break;}
					case 'D':{sum+=13*power;power*=16;break;}
					case 'E':{sum+=14*power;power*=16;break;}
					case 'F':{sum+=15*power;power*=16;break;}
					default:{sum+=0;}
				}
			}
		}
	}
	if(s[0]=='-')
	  sum=-sum;
	return sum;
}
int strToInt(char * s,int base)
{
	if(base==2)
	  return two(s);
	if(base==8)
	  return eight(s);
	if(base==10)
	  return ten(s);
	if(base==16)
	  return sixteen(s);
}


int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

