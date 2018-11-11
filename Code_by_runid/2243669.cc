#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 10000
char s[MAX_STR_LEN];
int main()
{
    while(~scanf("%s",s))
    {
        int length=strlen(s);
        int i;
        for(i=0;i<length;i++)
        {
            if(s[i]=='0')
                printf("0000");
            else if(s[i]=='1')
                printf("0001");
            else if(s[i]=='2')
                printf("0010");
            else if(s[i]=='3')
                printf("0011");
            else if(s[i]=='4')
                printf("0100");
            else if(s[i]=='5')
                printf("0101");
            else if(s[i]=='6')
                printf("0110");
            else if(s[i]=='7')
                printf("0111");
            else if(s[i]=='8')
                printf("1000");
            else if(s[i]=='9')
                printf("1001");
            else if(s[i]=='A'||s[i]=='a')
                printf("1010");
            else if(s[i]=='B'||s[i]=='b')
                printf("1011");
            else if(s[i]=='C'||s[i]=='c')
                printf("1100");
            else if(s[i]=='D'||s[i]=='d')
                printf("1101");
            else if(s[i]=='E'||s[i]=='e')
                printf("1110");
            else
                printf("1111");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1637
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

