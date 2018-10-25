#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>

#define timespec JGFHDFHDJKFDF
#include <iomanip>

typedef long long LL;
using namespace std;

template <class T>
class Data {
public:
    T v;
    Data(T t = 0): v(t) {};
    void setValue(T k) {
        v = k;
    };
    Data operator + (Data D) {
        Data ans(D.v + v);
        return ans;
    }
    bool operator < (Data D) {
        return (v < D.v);
    }
    bool operator > (Data D) {
        return (v > D.v);
    }
    friend ostream& operator << (ostream& out, Data<T> D) {
        out << setiosflags(ios::fixed) << setprecision(2) << D.v;
        return out;
    }
};

template <class T>
class GetResult {
public:
    static Data<T> getSum(Data<T>* D, int num) {
        Data<T> ans;
        T res = 0;
        for (int i = 0; i < num; i++) {
            res += (D + i)->v;
        }
        ans.v = res;
        return ans;
    }
    static Data<T> getMax(Data<T>* D, int num) {
        Data<T> ans;
        T res = D->v;
        for (int i = 1; i < num; i++) {
            if ((D + i)->v > res) {
                res = (D + i)->v;
            }
        }
        ans.v = res;
        return ans;
    }
    static Data<T> getMin(Data<T>* D, int num) {
        Data<T> ans;
        T res = D->v;
        for (int i = 1; i < num; i++) {
            if ((D + i)->v < res) {
                res = (D + i)->v;
            }
        }
        ans.v = res;
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
	Time:12 ms
	Memory:1272 kb
****************************************************************/

