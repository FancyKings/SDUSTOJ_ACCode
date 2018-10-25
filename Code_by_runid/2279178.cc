#include <bits/stdc++.h>

using namespace std;

class Data{
private:
    double num;
public:
    Data()
    {
        num = 0;
        cout << "Initialize a data 0" << endl;
    }
    Data(double d)
    {
        num = d;
        cout << "Initialize a data " << d << endl;
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
    Data data1;
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2050
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

