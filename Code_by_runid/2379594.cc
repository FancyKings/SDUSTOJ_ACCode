#include <bits/stdc++.h>

using namespace std;

multiset<int,greater<int> > a;

class MaxValue
{
private:
    int v;
public:
    void append(int t)
    {
        a.insert(t);
    }
    const int getMax()const
    {
        return *a.begin();
    }
};


int main()
{
    int a;
    MaxValue test;
    cin>>a;
    while (a != 0)
    {
        test.append(a);
        cin>>a;
    }
    cout<<test.getMax()<<endl;
    return 0;
}

/**************************************************************
	Problem: 1830
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

