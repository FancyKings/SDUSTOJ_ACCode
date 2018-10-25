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

class Vec {
public:
    set<int> dic;
    Vec() {};
    friend istream& operator >> (istream& in, Vec& V) {
        int num;
        in >> num;
        int t;
        while (num--)
        {
            in >> t;
            V.dic.insert(t);
        }
        return in;
    }
    friend ostream& operator << (ostream& out, Vec& V) {
        set<int>::iterator p = V.dic.begin();
        int l = V.dic.size();
        if (l)
            cout << (int)(*p++);
        while (p != V.dic.end()) {
            cout << ' ' << (int)*p++;
        }
        out << endl;
        return out;
    }
    Vec operator - (Vec& V) {
        Vec T;
        set<int>::iterator p = dic.begin();
        while (p != dic.end()) {
            int t = *p;
            if (!V.dic.count(t)) {
                T.dic.insert(t);
            }
            p++;
        }
        return T;
    }
};

int main()
{
    Vec v1, v2, v3;
    cin>>v1;
    cin>>v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    v3 = v1 - v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    cout<<"v3:"<<v3;
    return 0;
}

/**************************************************************
	Problem: 2104
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

