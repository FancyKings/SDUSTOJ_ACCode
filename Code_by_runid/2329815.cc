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
#define timespec A_A_A
#include <iomanip>
typedef long long LL;
using namespace std;

stack<double> num;
stack<char> all;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		double dig;
		char sign;
		while (n--)
		{
			cin >> dig >> sign;
			if (!all.empty())
			{
				if (all.top() == '-')
					dig = -dig;
				else if (all.top() == '*')
				{
					dig *= num.top();
					num.pop();
				}
				else if (all.top() == '/')
				{
					dig /= num.top();
					num.pop();
				}
			}
			num.push(dig);
			all.push(sign);
		}
		double ans = 0;
		while (!num.empty())
		{
			ans += num.top();
			num.pop();
		}
		while (!all.empty())
		{
			all.pop();
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << ans << endl;
	}
	return 0;
}
/**************************************************************
	Problem: 1351
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

