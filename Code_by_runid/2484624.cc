#include <bits/stdc++.h>

using namespace std;

class Data{
public:
    int i;
    double d;
    int flag;
    Data(){
        cout << "A default object is created." << endl;
        flag = 0;
    }
    Data(int t):i(t){
        flag = 1;
        cout << "An integer object " << i << " is created." << endl;
    }
    Data(double t):d(t){
        flag = 2;
        cout << "A double object " << d << " is created." << endl;
    }
    ~Data(){
        if(!flag){
            cout << "The default object is erased." << endl;
        }
        else if(flag&1){
            cout << "The integer object " << i << " is erased." << endl;
        }
        else{
            cout << "The double object " << d << " is erased." << endl;
        }
    }
};

int main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}
/**************************************************************
	Problem: 2192
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

