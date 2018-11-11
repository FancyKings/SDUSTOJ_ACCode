#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

const int maxn = 20000;
queue<LL> a[maxn];

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m;
    while(cin >> n >> m)
    {
        string s;
        for(int i = 0 ; i < m; i++)
        {
            cin >> s;
            if(s[0] == 'I')
            {
                for(int j = 1; j <= n; j++)
                {
                    while(!a[j].empty())
                    {
                        a[j].pop();
                    }
                }
            }
            else if(s == "PUSH")
            {
                int id;
                LL val;
                int t;
                cin >> id >> val >> t;
                while(t--)
                    a[id].push(val);
            }
            else
            {
                int id, t;
                cin >> id >> t;
                if(a[id].empty() || a[id].size() < t)
                {
                    cout << "NULL" << endl;
                }
                else
                {
                    t = 1;
                    while(t--)
                    {
                        cout << a[id].front() << endl;
                        a[id].pop();
                    }
                }
            }
        }
        for(int k = 1; k <= n; k++)
        {
            while(!a[k].empty())
            {
                a[k].pop();
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1358
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:592 ms
	Memory:69980 kb
****************************************************************/

