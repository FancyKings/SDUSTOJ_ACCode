#include <bits/stdc++.h>

using namespace std;

class Overload{
public:
    int a;
    char c;
    Overload(int t){
        a = t;
        cout << "First constructor is called to make a = " << a << ", c = '0'." << endl;
    }
    Overload(){
        cout << "Default constructor is called to make a = 0, c = '0'." << endl;
    }
    Overload(char t){
        c = t;
        cout << "Second constructor is called to make a = 0, c = '" << c << "'." << endl;
    }
    Overload(int t,char k):a(t),c(k){
        cout << "Third constructor is called to make a = " << a << ", c = '" << c << "'." << endl;
    }
};

int main()
{
    int i;
    char ch;
    cin>>i>>ch;
    Overload t1, t2(i), t3(ch), t4(i, ch);
    return 0;
}
/**************************************************************
	Problem: 2220
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

