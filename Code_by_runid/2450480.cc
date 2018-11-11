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

class Integer {
public:
    int data;
    Integer(int t): data(t) {};
    bool judge() {
        int ans = 0;
        while (data) {
            ans += data % 10;
            data /= 10;
        }
        if (ans & 1)
            return 1;
        return 0;
    }
};

int main()
{
    int i;
    while(cin>>i)
    {
        Integer INT(i);
        if (INT.judge())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2101
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

