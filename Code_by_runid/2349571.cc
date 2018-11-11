#include <bits/stdc++.h>

using namespace std;

class newInt
{
private:
    int a;
public:
    friend ostream& operator << (ostream& out,const newInt& t)
    {
        out << t.a;
        return out;
    }
    friend istream& operator >> (istream& in,newInt& t)
    {
        in >> t.a;
        return in;
    }
    newInt(int aa = 0):a(aa){};
    newInt operator +(newInt& t)
    {
        newInt temp;
        int x = a,y = t.a;
        int n = 1;
        while(x > 0|| y > 0)
        {
            temp.a = n*((x%10+y%10)%10) + temp.a;
            n *= 10;
            x /= 10;
            y /= 10;
        }
        return temp;
    }

};
int main()
{
    int cases;
    newInt a, b, c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>a>>b;
        c = a + b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1829
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

