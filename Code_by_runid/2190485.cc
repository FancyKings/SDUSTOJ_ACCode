#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#define MAX_STR_LEN 1000
char s[MAX_STR_LEN];
int search_point(int i)
{
    int length=strlen(s);
    for(; i<length; i++)
    {
//        printf("%c\t",s[i]);
        if(s[i]=='.')
        {
            break;
        }
    }
    return i;
}
int add(int a,int b)
{
	if(b-a>2)
	  return -1;
    int i,sum=0,length=strlen(s),power=1;
    for(i=b; i>=a; i--)
    {
//        printf("=%c=#%d#\n",s[i],i);
        sum+=power*(s[i]-'0');
        power*=10;
    }
	if(sum<100&&b-a>1)
	  return -1;
	if(sum<10&&b>a)
	  return -2;
    return sum;
}
int nright()
{
    int i,length=strlen(s);
    for(i=0; i<length; i++)
    {
		if(s[i]!='.'&&!isdigit(s[i])&&s[i]!='\n'){
//			printf("native=%c=\n",s[i]);
            return 1;
		}
    }
    return 0;
}
int found(int a,int b,int c)
{
//	printf("abc====%d %d %d\n",a,b,c);
    if(a==0)
        return 1;
    else{
        if(!isdigit(s[a-1])||!isdigit(s[a+1])
           ||!isdigit(s[b-1])||!isdigit(s[b+1])
           ||!isdigit(s[c+1])||!isdigit(s[c-1]))
        {
//			printf("\n=%c=%d\n",s[c+1],c+1);
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    while(fgets(s,MAX_STR_LEN,stdin)!=NULL)
    {
        int p1=0,p2=0,p3=0,p4=0;
        p1=search_point(0);
        p2=search_point(p1+1);
        p3=search_point(p2+1);
//        printf("p1==%d,%d %d\n",p1,p2,p3);
        if(!(p3>p2&&p2>p1))
        {
//			printf("1\n");
            printf("NO\n");
        }
		else if(p3-p2>4||p2-p1>4)
		{
//			printf("2\n");
			printf("NO\n");
		}
        else if(nright())
        {
//			printf("3\n");
            printf("NO\n");
        }
        else if(found(p1,p2,p3))
        {
//			printf("4\n");
            printf("NO\n");
        }
        else
        {
            int length=strlen(s);
            int sum1=add(0,p1-1);
            int sum2=add(p1+1,p2-1);
            int sum3=add(p2+1,p3-1);
            int sum4=add(p3+1,length-2);
//          printf("%d %d %d %d length=%d\n",sum1,sum2,sum3,sum4,length);
            if(sum1<0||sum2<0||sum3<0||sum4<0
                    ||sum1>255||sum2>255||sum3>255
                    ||sum4>255)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        memset(s,0,sizeof(s));
    }
    return 0;
}
/**************************************************************
	Problem: 1301
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

