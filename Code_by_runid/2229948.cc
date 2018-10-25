#include <stdio.h>
#include <ctype.h>
#define is_digit isdigit


int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_digit(ch) ? "Yes, it is a digit."
                          : "No, it is not a digit." )
          );
    return 0;
}
/**************************************************************
	Problem: 1277
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

