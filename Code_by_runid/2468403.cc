#include <bits/stdc++.h>

using namespace std;

class Expression{
public:
    int a, b;
    char cmd;
    Expression(int aa,int bb,int cc):a(aa),b(bb),cmd(cc){};
    void show(){
        int ans = 0;
        if(cmd == '+'){
            ans = a + b;
        }
        if(cmd == '-'){
            ans = a - b;
        }
        if(cmd == '/'){
            ans = a / b;
        }
        if(cmd == '*'){
            ans = a * b;
        }
        cout << a << ' ' << cmd << ' '  << b << " = " << ans << endl;
    }
};
int main()
{
    int N, i, a, b;
    char op;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        cin>>a>>op>>b;
        Expression exp(a, b, op);
        exp.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2089
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

