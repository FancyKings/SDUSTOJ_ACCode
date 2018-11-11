#include <stdio.h>
#include <ctype.h>
#define MAX_STR_LEN 10000
char * str_chr(char *s,char c)
{
	char *t=s;
	while(*t!=0)
	{
		if(*(t)==c)
		{
		//	printf("%c",*t);
			return t;
		}
		else
			t++;
	}
	return NULL;
}


int main()
{
    char ch;
    char s[MAX_STR_LEN], *s1;
    while(gets(s) != NULL)
    {
        ch = getchar();
        s1 = str_chr(s, ch);
        if(s1 == NULL)
            printf("-1\n");
        else
            printf("%d\n", s1 - s);
        gets(s); // ä»ç¨äºè¯»åºå­ç¬¦åçæ¢è¡ç¬¦ï¼ä»¥ç¡®ä¿whileå¾ªç¯ågetsè¯»å°æ­£ç¡®çæ°æ®ï¼æ å¶ä»æä¹ï¼äºçè§£é¢ææ å³ã
    }
    return 0;
}
/**************************************************************
	Problem: 1487
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

