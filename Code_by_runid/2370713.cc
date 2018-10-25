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
            else if(cmd == 2)
            {
                if(a.empty())
                    cout << -1 << endl;
                else
                {
                    cout << a.front() << endl;
                    a.pop_front();
                }
            }
            else
            {
                a.clear();
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1360
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

