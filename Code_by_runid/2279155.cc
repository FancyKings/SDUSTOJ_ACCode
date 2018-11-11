#include <bits/stdc++.h>

using namespace std;

class Data{
private:
    double num;
public:
    Data(double d)
    {
        num = d;
    }
    double getValue() const
    {
        return num;
    }
    void showValue()
    {
        cout << num <<endl;
    }
};


int main()
{
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2049
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

