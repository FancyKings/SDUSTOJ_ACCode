#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	vector<string> all;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		all.push_back(s);
	}
	sort(all.begin(), all.end());
	vector<string>::iterator p;
	for (p = all.begin(); p != all.end(); p++)
	{
		cout << *p << endl;
	}
	return 0;
}
/**************************************************************
	Problem: 1355
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:1336 ms
	Memory:3252 kb
****************************************************************/

