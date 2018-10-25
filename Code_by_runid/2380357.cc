#include <bits/stdc++.h>

using namespace std;

const int maxn = 100 + 5;

class Matrix
{
public:
    int a[maxn][maxn];
    int h,l;
    int flag;
public:
    Matrix():flag(0) {};
    friend istream& operator >> (istream& in,Matrix& t)
    {
        in >> t.h >> t.l;
        memset(t.a,0,sizeof(t.a));
        for(int i = 0; i < t.h; i++)
        {
            for(int j = 0; j < t.l; j++)
            {
                in >> t.a[i][j];
            }
        }
        return in;
    }
    friend ostream& operator << (ostream& out,const Matrix& t)
    {
        if(t.flag)
        {
            out << "Error" << endl;
            return out;
        }
        for(int i = 0; i < t.h; i++)
        {
            out << t.a[i][0];
            for(int j = 1; j < t.l; j++)
            {
                out << " " << t.a[i][j];
            }
            out << endl;
        }
        return out;
    }
    Matrix& operator + (const Matrix& t)
    {
        Matrix ans;
        if(h != t.h || l != t.l)
        {
            ans.flag = 1;
            return ans;
        }
        memset(ans.a,0,sizeof(ans.a));
        ans.flag = 0;
        ans.h = h;
        ans.l = l;
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < l; j++)
            {
                ans.a[i][j] = a[i][j] + t.a[i][j];
            }
        }
        return ans;
    }
    Matrix& operator * (const Matrix& t)
    {
        Matrix ans;
        if(l != t.h)
        {
            ans.flag = 1;
            return ans;
        }
        memset(ans.a,0,sizeof(ans.a));
        ans.flag = 0;
        ans.h = h;
        ans.l = t.l;
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < t.l; j++)
            {
                int sum = 0;
                for(int k = 0; k < t.h; k++)
                {
                    sum += a[i][k] * t.a[k][j];
                }
                ans.a[i][j] = sum;
            }
        }
        return ans;
    }
};
int main()
{
    int cases, i;
    cin>>cases;
    for (i = 0; i < cases; i++)
    {
        Matrix A, B, C, D;
        cin>>A>>B;
        C = A + B;
        D = A * B;
        cout<<"Case "<<i + 1<<":"<<endl;
        cout<<C<<endl;
        cout<<D;
    }
    return 0;
}
/**************************************************************
	Problem: 1816
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1408 kb
****************************************************************/

