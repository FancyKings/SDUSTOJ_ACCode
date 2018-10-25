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
    Time(int a = 0,int b = 0,int c = 0){
        h = a,m = b,s = c;
    }
    Time(Time& T){
        h = T.h,m = T.m,s = T.s;
        cout << "There was a call to the copy constructor : " << h << ","
        << m << "," << s << endl;
    }
    Time& setTime(int a,int b,int c){
        h = a,m = b,s = c;
        return *this;
    }
    Time& setTime(Time& T){
        h = T.h,m = T.m,s = T.s;
        return *this;
    }
    Time& getTime(){
        return *this;
    }
    void showTime(){
        cout << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m << ":"
             << setw(2) << setfill('0') << s
             << endl;
    }
};

int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:2216 ms
	Memory:1268 kb
****************************************************************/

