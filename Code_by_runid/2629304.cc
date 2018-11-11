#include <bits/stdc++.h>

using namespace std;
int num[27] = {0};
string in[5];

int char2int(char c){
    if(c >= 'A' && c <= 'Z'){
        return (c - 'A');
    }
    return 26;
}

int main(){
//    freopen("HjhLoveU.txt", "w", stdout);
    for(int i = 0;i < 4; ++i){
        getline(cin, in[i]);
    }
    int maxn = -2;
    for(int i = 0;i < 4; ++i){
        int len = in[i].size();
        for(int j = 0;j < len; ++j){
            num[char2int(in[i][j])]++;
            if(char2int(in[i][j]) != 26)
                maxn = max(maxn, num[char2int(in[i][j])]);
        }
    }
    for(int i = 0;i < 27; ++i){
        num[i] = maxn - num[i];
    }
    for(int i = 0;i < maxn; ++i){
        for(int j = 0;j < 26; ++j){
            if(j){
                printf(" ");
            }
            if(num[j]){
                printf(" ");
                num[j] -= 1;
            }
            else{
                printf("*");
            }
        }
        puts("");
    }
    puts("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
    return 0;
}

/**************************************************************
	Problem: 2247
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

