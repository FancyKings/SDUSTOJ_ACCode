#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
multiset<LL,less<LL> > a;
multiset<LL>::iterator it;

int main()
{
    int num;
    while(cin >> num && num)
    {
        char c;
        while(num--)
        {
            cin >> c;
            if(c == 'B')
            {
                LL now;
                cin >> now;
                a.insert(now);
            }
            else
            {
                if(!a.empty())
                {
                    it = a.begin();
                    cout << *it << endl;
                    a.erase(it);
                }
            }
        }
        a.clear();
    }
    return 0;
}

/**************************************************************
	Problem: 1361
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

