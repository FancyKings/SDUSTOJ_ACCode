#include <bits/stdc++.h>

using namespace std;

class Array
{
public:
    int length;
    int * mems;
public:
    Array():length(0),mems(NULL){};
    int operator == (const Array& a)
    {
//        if(this = &a)
//            return 1;
        if(length == a.length)
        {
            int OK = 1;
            for(int i = 0;i < a.length;i++)
            {
                if( mems[i] != a.mems[i])
                {
                    OK = 0;
                    break;
                }
            }
            if(OK)
                return 1;
            return 0;
        }
        else
            return 0;
    }
    friend ostream& operator << (ostream& out, const Array& a)
    {
        for(int i = 0;i < a.length; i++)
        {
            if(i)
                out << ' ' << a.mems[i];
            else
                out << a.mems[i];
        }
        return out;
    }
    friend istream& operator >> (istream& in,Array& a)
    {
        in >> a.length;
        a.mems = new int[a.length * 2];
        for(int i = 0;i < a.length; i++)
        {
            in >> a.mems[i];
        }
        return in;
    }
};


int main()
{
    int cases;
    cin>>cases;
    Array arraies[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>arraies[i];
    }
    cout<<arraies[0]<<endl;
    for (int i = 1; i < cases; i++)
    {
        if (arraies[i] == arraies[i - 1])
        {
            cout<<arraies[i]<<" "<<"equal to above."<<endl;
        }
        else
        {
            cout<<arraies[i]<<" "<<"unequal to above."<<endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1784
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

