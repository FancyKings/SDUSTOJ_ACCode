#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, dic[1010] = {0}, len = 0;
char in[1010] = {0};

int charToInt(char c){
    return ((c == ' ')? (0) : (c - 'a' + 1));
}

char intToChar(int x){
    return ((!x) ? (' ') : ('a' + x - 1));
}

void encode(){
    for(int i = 1;i < len - 2; ++i){
        dic[i] += dic[i-1];
    }
    return ;
}

void decode(){
    for(int i = len - 3;i >= 0; --i){
        dic[i] = (((dic[i] - dic[i-1]) % 27 ) + 27 ) % 27;
    }
    return ;
}

int main(){
    while(gets(in)){
        len = strlen(in);
        for(int i = 2;i < len; ++i){
            dic[i - 2] = charToInt(in[i]);
        }
        if(in[0] == 'e'){
            encode();
        }
        else{
            decode();
        }
        for(int i = 0;i < len-2; ++i){
            printf("%c", intToChar(dic[i] % 27));
        }
        puts("");
    }
    return 0;
}

/**************************************************************
	Problem: 2233
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:752 kb
****************************************************************/

