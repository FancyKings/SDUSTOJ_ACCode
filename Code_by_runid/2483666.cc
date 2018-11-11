#include <bits/stdc++.h>

using namespace std;

class Test{
public:
    int m;
    Test(){
        cout << "Test 0 is created." << endl;
        m = 0;
    }
    Test(int t):m(t){
        cout << "Test " << m << " is created." << endl;
    }
    ~Test(){
        cout << "Test " << m << " is erased." << endl;
    }
    int setMem(int mm){
        m = mm;
    }
    const int getMem()const{
        return m;
    }
};
int main()
{
    Test t1;
    int i;
    cin>>i;

    Test t2(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    cin>>i;
    t2.setMem(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2194
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

