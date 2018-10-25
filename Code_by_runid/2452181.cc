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


template <class T>
class MyArray {
public:
    vector<T> vec;
    int si;
    MyArray(int t): si(t) {
        vec.resize(si * 2);
    };
    T& operator [](int u) {
        return vec[u];
    }
    ~MyArray() {
        // vec.clear();
    };
};


int main()
{
    int k, m, n;

    cin >> k;
    MyArray<string> s(k);
    for(int i = 0; i < k; i++)
        cin >> s[i];

    cin >> m >> n;
    cout << s[m];
    for(int i = m + 1; i <= n; i++)
        cout << " " << s[i];
    cout << endl;

    cin >> k;
    MyArray<int> a(k);
    for(int i = 0; i < k; i++)
        cin >> a[i];

    cin >> m >> n;
    cout << a[m];
    for(int i = m + 1; i <= n; i++)
        cout << " " << a[i];
    cout << endl;
}

/**************************************************************
	Problem: 2108
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

