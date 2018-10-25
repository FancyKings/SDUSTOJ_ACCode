#include <bits/stdc++.h>

using namespace std;

template <class T>
class Data
{
private:
    T num;
public:
    Data(T a = 0):num(a) {};
    int operator < (Data a)
    {
        return num < a.num;
    }
    int operator > (Data a)
    {
        return num > a.num;
    }
    Data operator + (Data a)
    {
        return Data(num + a.num);
    }
    friend ostream& operator << (ostream& out, const Data& a)
    {
        out<<fixed<<setprecision(2)<<a.num;
        return out;
    }
    void setValue(T a)
    {
        num = a;
    }
};

template <class T>
class GetResult
{
public:
    static Data<T> getSum(Data<T> * a,int num)
    {
        Data<T> ans(a[0]);
        for(int i = 1 ; i  < num ; i++)
        {
            ans = ans + a[i];
        }
        return ans;
    }
    static Data<T> getMax(Data<T> *a, int num)
    {
        Data<T> ans(a[0]);
        for(int i=1; i<num; i++)
            if(a[i]>ans)
                ans=a[i];
        return ans;
    }
    static Data<T> getMin(Data<T> *a, int num)
    {
        Data<T> ans(a[0]);
        for(int i=1; i<num; i++)
            if(a[i]<ans)
                ans=a[i];
        return ans;
    }
};




int main()
{
    Data<int> iData[1001];
    Data<double> dData[1001];
    int cases, num;
    char ch;
    int u;
    double v;
    Data<int> a(10), b(20);
    Data<double> c(3.14), d(-4.1);
    cout<<"a + b = "<<(a + b)<<endl;
    cout<<"max(a, b) = "<<(a > b ? a : b)<<endl;
    cout<<"min(a, b) = "<<(a < b ? a : b)<<endl;
    cout<<"c + d = "<<(c + d)<<endl;
    cout<<"max(c, d) = "<<(c > d ? c : d)<<endl;
    cout<<"min(c, d) = "<<(c < d ? c : d)<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            if (ch == 'i')
            {
                cin>>u;
                iData[j].setValue(u);
            }
            else if (ch == 'd')
            {
                cin>>v;
                dData[j].setValue(v);
            }
        }
        if (ch == 'i')
        {
            cout<<GetResult<int>::getMax(iData, num);
            cout<<" "<<GetResult<int>::getMin(iData, num);
            cout<<" "<<GetResult<int>::getSum(iData, num)<<endl;
        }
        else if (ch == 'd')
        {
            cout<<GetResult<double>::getMax(dData, num);
            cout<<" "<<GetResult<double>::getMin(dData, num);
            cout<<" "<<GetResult<double>::getSum(dData, num)<<endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1788
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

