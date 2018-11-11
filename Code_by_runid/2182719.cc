#include <stdio.h>
#include <stdlib.h>

int is_vocals(char ch)
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        return 1;
    else
        return 0;
}


int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_vocals(ch) ? "It is a vocals."
                            : "It is not a vocals." )
          );
    return 0;
}
/**************************************************************
	Problem: 1289
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

