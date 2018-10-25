#include <bits/stdc++.h>

using namespace std;
#define Data Demo

class Data{
private:
    int num;
public:
    Data()
    {
        num = 0;
        cout << "A data " << num << " is created!" << endl;
    }
    Data(int d)
    {
        num = d;
        cout << "A data " << num << " is created!" << endl;
    }
    ~Data()
    {
        cout << "A data " << num << " is erased!" << endl;
    }
    void show()
    {
        cout << "This is data " << num << endl;
    }
};


int main()
{
    Demo tmp(10), tmp2;
    int d;
    cin>>d;
    Demo tmp3(d);

    tmp.show();
    tmp2.show();
    tmp3.show();
    return 0;
}
/**************************************************************
	Problem: 1809
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

