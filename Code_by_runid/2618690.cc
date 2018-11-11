#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
const int maxn = 1e2;

ll dic[maxn] = {0};

void init(){
    dic[0] = 0, dic[1] = 1, dic[2] = 3, dic[3] = 5;
    for(int i = 4;i <= 100; ++i){
        dic[i] = 2 * dic[i - 3] + dic[i - 1];
    }
    return ;
}

int main(){
    init();
    int n, t;
    cin >> n;
    while(n--){
        cin >> t;
        cout << dic[t] << endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2240
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

