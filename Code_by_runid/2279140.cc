#include <bits/stdc++.h>

using namespace std;

class Data{
private:
    double num;
public:
    void init(double a){
        num = a;
    }
    double getValue() const
    {
        return num;
    }
    void showValue()
    {
        cout << num << endl;
    }
};

int main()
{
    Data data;
    double d;
    cin>>d;
    data.init(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2048
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

