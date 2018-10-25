#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

template <class T>
class Complex{
public:
    T a, b;
    Complex(T x = 0,T y = 0):a(x),b(y){};
    double getModulus(){
        double ans = sqrt(a*a + b*b);
        return ans;
    }
};
int main()
{
    int a, b;
    double c, d;
    cin>>a>>b;
    Complex<int> c1(a, b);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c1.getModulus()<<endl;
    cin>>c>>d;
    Complex<double> c2(c, d);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c2.getModulus()<<endl;
    return 0;
}
/**************************************************************
	Problem: 2217
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

