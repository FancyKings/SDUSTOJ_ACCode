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

int O(int a, int b, char op) {
    if (op == '+') {
        return (a ^ b);
    } else if (op == '-') {
        return (!(a ^ b));
    } else if (op == '*') {
        return (a & b);
    } else {
        return (a | b);
    }
}

class Logical {
public:
    int a, b;// 0 || 1
    char op;
    Logical(int aa, int bb, int cmd): a(aa), b(bb), op(cmd) {};
    ~Logical() {};
    void show() {
        cout << a << ' ' << op << ' ' << b << " = " << O(a, b, op) << endl;
    }
};


int main()
{
    int a, b;
    char ch;
    while (cin>>a>>ch>>b)
    {
        Logical log(a, b, ch);
        log.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2099
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

