#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
deque<string> a;

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int num;
    while(cin >> num)
    {
        for(int i = 0;i < num; i++)
        {
            int cmd;
            string s;
            cin >> cmd;
            if(cmd == 1)
            {
                cin >> s;
                a.push_back(s);
            }
            else if(cmd == 3)
            {
                if(a.empty())
                    cout << -1 << endl;
                else
                {
                    cout << a.front() << endl;
                }
            }
            else if(cmd == 0)
            {
                if(a.empty())
                    continue;
                a.clear();
            }
            else if(cmd == 2)
            {
                cin >> s;
                a.push_front(s);
            }
            else if(cmd == 4)
            {
                if(a.empty())
                    cout << -1 << endl;
                else
                {
                    cout << a.back() << endl;
                }
            }
            else if(cmd == 5)
            {
                if(a.empty())
                    cout << -1 << endl;
                else
                    a.pop_front();
            }
            else if(cmd == 6)
            {
                if(a.empty())
                    cout << -1 << endl;
                else
                {
                    a.pop_back();
                }
            }
        }
        a.clear();
    }
    return 0;
}

/**************************************************************
	Problem: 1359
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

