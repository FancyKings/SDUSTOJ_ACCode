#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

vector<int> A;

int main(int argc, char const *argv[])
{
	string s;
	int a, b, c;
	while (cin >> s)
	{
		if (s[0] == 'B')
		{
			cin >> a >> b;
			A.assign(a, b);
		}
		else if (s[0] == 'M')
		{
			cin >> a >> b;
			A[a - 1] = b;
		}
		else if (s[0] == 'I')
		{
			cin >> a >> b >> c;
			vector<int>::iterator p = A.begin();
			A.insert(p + a - 1, p + b - 1, p + c);
		}
		else if (s[0] == 'E')
		{
			cin >> a >> b;
			A.erase(A.begin() + a - 1 , A.begin() + b);
			//cout << A.size() << endl;
		}
		else if (s[0] == 'P')
		{
			cin >> a >> b;
			int flag = 0;
			for (int i = a - 1; i < b; i++)
			{
				if (flag++) cout << ' ';
				cout << "[" << i + 1 << "]:" << A[i];
			}
			cout << endl;
		}
	}
	return 0;
}
/**************************************************************
	Problem: 1348
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:288 ms
	Memory:118468 kb
****************************************************************/

