#include <bits/stdc++.h>
#include <queue>

using namespace std;
typedef long long LL;

const int maxn = 10000 + 50;
queue<LL> a[maxn];

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m;
    while(cin >> n >> m)
    {
        string s;
        for(int i = 0 ;i < m; i++)
        {
            cin >> s;
            if(s[0] == 'I')
            {
                for(int j = 1;j <= n; j++)
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
                cin >> id >> val;
                a[id].push(val);
            }
            else
            {
                int id;
                cin >> id;
                if(a[id].empty())
                {
                    cout << "NULL" << endl;
                }
                else
                {
                    cout << a[id].front() << endl;
                    a[id].pop();
                }
            }
        }
        for(int k = 1;k <= n; k++)
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
	Problem: 1357
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:7212 kb
****************************************************************/

