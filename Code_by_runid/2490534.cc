#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

int CASE = 0;

void print(string s,set<int> a){
    cout << s << " = {";
    set<int> ::iterator p = a.begin();
    for(; p != a.end(); p++){
        if(p != a.begin())
            cout << ", ";
        cout << *p;
    }
    cout << "}" << endl;
    return ;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        set<int> a, b;
        int num, temp;
        cin >> num;
        for(int i = 0;i < num; i++){
            cin >> temp;
            a.insert(temp);
        }
        cin >> num;
        for(int i = 0;i < num; i++){
            cin >> temp;
            b.insert(temp);
        }
        set<int> t1,t2,t3,t4,t5;
        cout << "Case# " << ++CASE << ":" << endl;
        print("A",a);
        print("B",b);
        set_union(a.begin(),a.end(),b.begin(),b.end(),inserter(t1,t1.begin()));
        print("A u B", t1);
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(t2,t2.begin()));
        print("A n B",t2);
        set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(t3,t3.begin()));
        print("A - B",t3);
        set_difference(t1.begin(),t1.end(),a.begin(),a.end(),inserter(t4,t4.begin()));
        print("SA",t4);
        set_difference(t1.begin(),t1.end(),b.begin(),b.end(),inserter(t5,t5.begin()));
        print("SB",t5);
    }
    return 0;
}
/**************************************************************
	Problem: 1349
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1284 kb
****************************************************************/

