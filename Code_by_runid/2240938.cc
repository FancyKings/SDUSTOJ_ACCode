#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chseq(char c)
{
    if(c>='a'&&c<='z')
        return (c-'a'+1);
    else
        return (c-'A'+1);
}

void output(char c,int n)
{
    if(n%10==1)
        printf("%c is %dst character.\n",c,n);
    else if(n%10==2)
        printf("%c is %dnd character.\n",c,n);
    else if(n%10==3)
        printf("%c is %drd character.\n",c,n);
    else
        printf("%c is %dth character.\n",c,n);
}


int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

