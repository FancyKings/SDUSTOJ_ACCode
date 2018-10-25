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
        while(num--)
        {
            char c;
            LL t;
            cin >> c >> t;
            if(c == 'i')
            {
                a.insert(t);
            }
            else
            {
                if(!a.empty())
                {
                    it = a.find(t);
                    if(it != a.end())
                    {
                        a.erase(it);
                    }
                }
            }
        }
        it = a.begin();
        for(; it != a.end(); it++)
        {
            if(it == a.begin())
                cout << *it;
            else
                cout << ' ' << *it;
        }
        cout << endl;
        a.clear();
    }
    return 0;
}

/**************************************************************
	Problem: 1362
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

