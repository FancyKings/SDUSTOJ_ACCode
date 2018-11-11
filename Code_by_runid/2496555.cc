#include <bits/stdc++.h>

using namespace std;
typedef long long LL;


class Cup{
public:
    int v;
    Cup(int a = 0):v(a){
        cout << "A cup of " << v << " ml is created." << endl;
    };
    ~Cup(){
        cout << "A cup of " << v << " ml is erased." << endl;
    }
    Cup(Cup& C){
        v = C.v;
        cout << "A cup of " << v << " ml is copied." << endl;
    }
    void setVolume(int a){
        v = a;
    }
};
int main()
{
    Cup c1;
    int i, j;
    cin>>i>>j;
    Cup c2(i), c3(c2);
    c3.setVolume(j);
    return 0;
}
/**************************************************************
	Problem: 2212
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

