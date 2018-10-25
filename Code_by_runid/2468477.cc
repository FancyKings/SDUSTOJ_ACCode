#include <bits/stdc++.h>

using namespace std;

void put_str(char* s,int head = -1,int tail = -1){
    char * t = s;
    int cnt = 0;
    if(head == -1 && tail == -1){
        while(*t != 0){
            if(cnt < 10)
                cout << *t;
            else
                break;
            t++;
            cnt++;
        }
    }
    else if(tail == -1){
        while(*t != 0){
            if(cnt < head)
                cout << *t;
            else
                break;
            t++;
            cnt++;
        }
    }
    else {
        for(int i = 0;i < tail; i++){
            t++;
        }
        while(*t != 0){
            if(cnt < head)
                cout << *t;
            else
                break;
            t++;
            cnt++;
        }
    }
    cout << endl;
    return ;
}

int main()
{
    char s[100];
    int k;
    cin >> s;
    while(cin >> k)
    {
        int l, m;
        if(k == 0)
            put_str(s);
        if(k == 1)
        {
            cin >> l;
            put_str(s, l);
        }

        if(k == 2)
        {
            cin >> l >> m;
            put_str(s, l, m);
        }
    }
}

/**************************************************************
	Problem: 2097
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

