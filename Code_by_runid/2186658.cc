#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

void swap_any(void *a,void *b,unsigned length)
{
    void * p=malloc(length);
    memset(p,0,length);
    memcpy(p,a,length);
    memcpy(a,b,length);
    memcpy(b,p,length);
    free(p);
}


int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}

/**************************************************************
	Problem: 1208
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

