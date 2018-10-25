#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <functional>
#include <utility>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
typedef long long LL;
using namespace std;


int OK(string s) {
    int l = s.size(), i = 0;
    for (i = 0; i <= l / 2; i++) {
        if (s[i] == s[l - 1 - i])
            continue;
        else
            break;
    }
    if (i == l / 2 + 1) {
        return 1;
    }
    else {
        return 0;
    }
}

class MyString {
public:
    string s;
    void input() {
        cin >> s;
    }
    void output() {
        if (OK(s)) {
            unsigned int l = s.size(), m = 0;
            if (l & 1) {
                m = l / 2;
            } else {
                m = l / 2 - 1;
            }
            for (unsigned int i = 0; i <= m; i++)
                cout << s[i];
            cout << endl;
        }
        else {
            cout << s << endl;
        }
    }
};

int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

