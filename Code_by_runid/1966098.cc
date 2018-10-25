#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A'||c=='a'||c=='e'||c=='E'||c=='I'||c=='i'||c=='o'||c=='O'||c=='U'||c=='u')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

/**************************************************************
	Problem: 1347
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

