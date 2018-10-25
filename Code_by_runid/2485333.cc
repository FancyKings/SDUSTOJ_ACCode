#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>

#define timespec JGFHDFHDJKFDF
#include <iomanip>

typedef long long LL;
using namespace std;

int D(int bs, int l) {
    int ans = bs;
    while (l--) {
        ans *= bs;
    }
    return ans;
}

class Integer {
public:
    int v;
    void setValue(int k) {
        v = k;
    };
    Integer(): v(0) {};
    const int getValue()const {
        return v;
    }
    int operator * (int k) {
        if (k == 1) {
            return v;
        }
        int ans = 0;
        int l = 0, t = v;
        while (t) {
            l++;
            t /= 10;
        }
        for (int i = 1; i <= k; i++) {
            ans *= D(10, l - 1);
            ans += v;
        }
        return ans;
    }
    void operator = (int k) {
        v = k;
    }
};
int main()
{
    Integer M, N;
    int a, n, m;
    cin>>a;
    M.setValue(a);
    cin>>n;
    while (n--)
    {
        cin>>m;
        N = M * m;
        cout<<N.getValue()<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2204
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

