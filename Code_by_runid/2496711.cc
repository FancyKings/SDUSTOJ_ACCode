#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

class Difficult{
public:
    int t;
    Difficult(int a = 0):t(a){};
    void show(){
        cout << ((t >= 0)?(t):(-t)) << endl;
    }
};

int main()
{
    int a;
    cin>>a;
    Difficult difficult(a);
    difficult.show();
    return 0;
}
/**************************************************************
	Problem: 2221
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

