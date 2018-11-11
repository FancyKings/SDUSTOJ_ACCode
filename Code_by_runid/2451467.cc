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

void swp(int& a, int& b, int& c, int k = 0) {
    if (!k) {
        int t1 = a, t2 = b, t3 = c;
        a = t2, b = t3, c = t1;
        return ;
    } else {
        if (k == 1) {
            int t1 = a, t2 = b, t3 = c;
            a = t3, b = t1, c = t2;
            return ;
        } else {
            int t1 = a, t2 = b, t3 = c;
            a = t3, b = t1, c = t2;
            swp(a, b, c, k - 1);
        }
    }
}

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c;
    while(cin >> k)
    {
        if(k == 0)
            swp(a, b, c);
        else
            swp(a, b, c, k);
        cout << a << " " << b << " " << c << " " << endl;
    }
}

/**************************************************************
	Problem: 2107
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

