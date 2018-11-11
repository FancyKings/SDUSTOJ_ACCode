#include <bits/stdc++.h>

using namespace std;

class Array
{
private:
    int * a;
    int l;
public:
    Array():a(NULL){};
    int size()
    {
        return l;
    }
    int get(int n)
    {
        l = n;
        a = new int[l*2];
        for(int i = 0;i < l;i++)
        {
            cin >> a[i];
        }
    }
    int& operator [](int n)
    {
        return a[n];
    }
};

int main()
{
    int cases;
    Array arr;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        int len;
        cin >> len;
        arr.get(len);
        for(int i = 0; i < arr.size(); i++)
            if(i + 1 == arr.size())
                cout << arr[i];
            else
                cout << arr[i] << " ";
        cout << endl;
    }
}

/**************************************************************
	Problem: 1572
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1580 kb
****************************************************************/

