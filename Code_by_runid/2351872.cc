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

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	map<string, int> s;
	int n;
	while (cin >> n)
	{
		string t;
		int pir;
		while (n--)
		{
			cin >> t >> pir;
			s[t] += pir;
		}
		map<string, int>::iterator p = s.begin();
		while (p != s.end())
		{
			cout << p->first << ':' << p->second << endl;
			p++;
		}
		s.clear();
	}
	return 0;
}
/**************************************************************
	Problem: 1354
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

