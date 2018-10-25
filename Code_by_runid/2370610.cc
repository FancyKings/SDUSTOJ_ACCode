#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

template <class T>
class Array
{
private:
    T *a;
    int l;
public:
    Array(int len):l(len)
    {
        l = len;
        a = new T[l * 2];
    }
    int size()
    {
        return l;
    }
    int cmp(T& a,T& b)
    {
        return a < b;
    }

    void put(int n)
    {
        sort(a,a+l,greater<T>());
        int lend = min(n,l);
        for(int i = 0; i < lend; i++)
        {
            if(!i)
                cout << a[i];
            else
                cout << ' ' << a[i];
        }
        cout << endl;
    }
    T& operator [](int n)
    {
        return a[n];
    }
};


int main()
{
    int cases, len;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        cin >> len;
        if(ca % 3 == 0)
        {
            Array<char> chr_arr(len);
            for(int i = 0; i < chr_arr.size(); i++)
                cin >> chr_arr[i];
            chr_arr.put(10);
        }
        if(ca % 3 == 1)
        {
            Array<int> int_arr(len);
            for(int i = 0; i < int_arr.size(); i++)
                cin >> int_arr[i];
            int_arr.put(10);
        }
        if(ca % 3 == 2)
        {
            Array<double> dbl_arr(len);
            for(int i = 0; i < dbl_arr.size(); i++)
                cin >> dbl_arr[i];
            dbl_arr.put(10);
        }
    }
}

/**************************************************************
	Problem: 1573
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1604 kb
****************************************************************/

