#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#define timespec SDFGHJKLKJHGFD
#include <iomanip>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

class Time{
public:
    int h, m, s;
    friend istream& operator >> (istream& in,Time& T){
        in >> T.h >> T.m >> T.s;
        return in;
    }
    int chekerr(){
        if(h < 0 || ((h*3600+m*60+s)) >= 24*3600
            || m < 0 || m >= 60
            || s < 0 || s >= 60)
            return 1;
        return 0;
    }
    friend ostream& operator << (ostream& out,Time T){
        if(T.chekerr()){
            out << "error!!!" ;
            return out;
        }
        out << setw(2) << setfill('0') << T.h << ":" <<setw(2) << setfill('0')
        << T.m << ":" <<setw(2) << setfill('0') << T.s;
        return out;
    }
    Time operator ++(){
        if(this->chekerr())
            return *this;
        int save = ((h*3600+m*60+s)+1)%(24*3600);
        h = save / 3600;
        m = (save - h * 3600) / 60;
        s = save - h * 3600 - m * 60;
        return *this;
    }
    Time operator ++(int){
        if(this->chekerr())
            return *this;
        Time t(*this);
        int save = ((h*3600+m*60+s)+1)%(24*3600);
        h = save / 3600;
        m = (save - h * 3600) / 60;
        s = save - h * 3600 - m * 60;
        return t;
    }
    Time operator --(){
        if(this->chekerr())
            return *this;
        int save = ((h*3600+m*60+s)-1 + 24 * 3600)%(24*3600);
        h = save / 3600;
        m = (save - h * 3600) / 60;
        s = save - h * 3600 - m * 60;
        return *this;
    }
    Time operator --(int){
        if(this->chekerr())
            return *this;
        Time t(*this);
        int save = ((h*3600+m*60+s)-1 + 24 * 3600)%(24*3600);
        h = save / 3600;
        m = (save - h * 3600) / 60;
        s = save - h * 3600 - m * 60;
        return t;
    }
};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}

/**************************************************************
	Problem: 1396
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:1272 kb
****************************************************************/

