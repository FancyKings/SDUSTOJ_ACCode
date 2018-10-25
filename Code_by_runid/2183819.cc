#include <stdio.h>


void recursive()
{
    char c;

    if((c = getchar()) != EOF)
    {
        recursive();
    }
    if(c != EOF)
        putchar(c);

}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:2204 kb
****************************************************************/

