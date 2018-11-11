#include <bits/stdc++.h>

using namespace std;

void add(string &ans,string a,string b){
    ans = a + b;
}

void add(int& ans, int a,int b){
    ans = a + b;
}

void add(double &ans,double a,double b){
    ans = a + b;
}

int main()
{
    string s, s1, s2;
    cin >> s1 >> s2;
    add(s, s1, s2);
    cout << s << endl;

    int i, i1, i2;
    cin >> i1 >> i2;
    add(i, i1, i2);
    cout << i << endl;

    double d, d1, d2;
    cin >> d1 >> d2;
    add(d, d1, d2);
    cout << d << endl;

}

/**************************************************************
	Problem: 2098
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

