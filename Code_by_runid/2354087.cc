#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

list <int> s;
list <int>::iterator p;

int main()
{
    int n;
    while(cin >> n)
    {
        int temp ;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            s.push_back(temp);
        }
        int num;
        cin >> num;
        while(num--)
        {
            int cmd;
            cin >> cmd;
            if(cmd == 1)
            {
                int i,j;
                cin >> i >> j;
                p = s.begin();
                while(p != s.end())
                {
                    if(*p == i)
                    {
                        break;
                    }
                    else
                        p++;
                }
                if(p != s.end())
                    s.insert(++p,j);
            }
            else if(cmd == 2)
            {
                int i;
                cin >> i;
                p = s.begin();
                while( p != s.end())
                {
                    if(*p <= i)
                    {
                        s.erase(p++);
                    }
                    else
                        p++;
                }
            }
            else if(cmd == 3)
            {
                int i,j;
                cin >> i >> j;
                p = s.begin();
                while(p != s.end())
                {
                    if(*p == j)
                        break;
                    p++;
                }
                if(p != s.end())
                {
                    s.remove(i);
                    p = s.begin();
                    while(p != s.end())
                    {
                        if(*p == j)
                        {
                            break;
                        }
                        else
                            p++;
                    }
                    if(p != s.end())
                        s.insert(++p,i);
                }
            }
        }
        for(p = s.begin(); p != s.end(); p++)
        {
            if(p != s.begin())
                cout << ' ';
            cout << *p;
        }
        cout << endl;
        s.clear();
    }
    return 0;
}

/**************************************************************
	Problem: 1356
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:892 ms
	Memory:1272 kb
****************************************************************/

