#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char in[1010];
    while(~scanf("%s", &in)){
        int end_pos = in[strlen(in) - 1];
        if(end_pos & 1){
            printf("Odd");
        }
        else{
            printf("Even");
        }
        puts("");
    }
    return 0;
}

/**************************************************************
	Problem: 2234
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

