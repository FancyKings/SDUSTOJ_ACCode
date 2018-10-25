#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
typedef int LL;
using namespace std;

int CASE = 0;


void COUT(const set<LL>& A)
{
	set<LL>::iterator p;
	cout << "{";
	for (p = A.begin(); p != A.end(); p++)
	{
		if (p == A.begin())
			cout << *p;
		else
			cout << ", " << *p;
	}
	cout << "}" << endl;
}

int main(int argc, char const *argv[])
{
	//freopen("a.txt", "w", stdout);
	set<LL> A, B;
	int T;
	cin >> T;
	while (T--)
	{
		int num;
		cin >> num;
		for (int i = 0; i < num; ++i)
		{
			LL temp;
			cin >> temp;
			A.insert(temp);
		}
		cin >> num;
		for (int i = 0; i < num; ++i)
		{
			LL temp;
			cin >> temp;
			B.insert(temp);
		}
		cout << "Case# " << ++CASE << ":" << endl;
		cout << "A = ";
		COUT(A);
		cout << "B = ";
		COUT(B);
		set<LL> t1, t2, t3, t4, t5;
		set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(t1, t1.begin()));
		cout << "A u B = ";
		COUT(t1);
		//t1.clear();
		set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(t2, t2.begin()));
		//COUT(t1);
		//t.clear();
		cout << "A n B = ";
		COUT(t2);
		//t.clear();
		set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(t3, t3.begin()));
		cout << "A - B = ";
		COUT(t3);
		//t.clear();
		set_difference(t1.begin(), t1.end(), A.begin(), A.end(), inserter(t4, t4.begin()));
		cout << "SA = ";
		COUT(t4);
		//t.clear();
		set_difference(t1.begin(), t1.end(), B.begin(), B.end(), inserter(t5, t5.begin()));
		cout << "SB = ";
		COUT(t5);
		A.clear(), B.clear();
	}
	return 0;
}
/**************************************************************
	Problem: 1349
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

