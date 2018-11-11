#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

set<LL>a, b;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	LL t;
	while (cin >> t)
	{
		if (t)
		{
			a.insert(t);
			while (cin >> t && t)
			{
				a.insert(t);
			}
		}
		while (cin >> t && t)
		{
			b.insert(t);
		}
		if (a.size() != b.size())
		{
			//cout << a.size() << " " << b.size() << endl;
			cout << "NO" << endl;
		}
		else
		{
			int OK = 1;
			set < LL >::iterator p1, p2;
			for (p1 = a.begin(), p2 = b.begin(); p1 != a.end() && p2 != b.end(); p1++, p2++)
			{
				if (*p1 != *p2)
				{
					OK = 0;
					break;
				}
			}
			if (OK)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		a.clear(), b.clear();
	}
	return 0;
}
/**************************************************************
	Problem: 1350
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

