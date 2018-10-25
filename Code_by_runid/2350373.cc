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
stack<char> s;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	string a;
	while (cin >> a)
	{
		int l = a.size();
		int OK = 1;
		for (int i = 0; i < l; i++)
		{
			if (s.empty() && a[i] == ')')
			{
				OK = 0;
				break;
			}
			else if (a[i] == '(')
			{
				s.push(a[i]);
			}
			else if (a[i] == ')')
			{
				if (s.top() == '(')
				{
					s.pop();
					continue;
				}
				else
				{
					OK = 0;
					break;
				}
			}
		}
		if (OK && s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		while (!s.empty())
		{
			s.pop();
		}
	}
	return 0;
}
/**************************************************************
	Problem: 1352
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

