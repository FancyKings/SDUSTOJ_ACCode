#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
map<string, string> s;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int m, n;
	while (cin >> m)
	{
		string t1, t2;
		while (m--)
		{
			cin >> t1 >> t2;
			s[t2] = t1;
		}
		cin >> n;
		while (n--)
		{
			string t;
			cin >> t;
			if (s.count(t))
			{
				cout << s[t] << endl;
			}
			else
				cout << "eh" << endl;
		}
		s.clear();
	}
	return 0;
}
/**************************************************************
	Problem: 1353
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:3040 ms
	Memory:9188 kb
****************************************************************/

