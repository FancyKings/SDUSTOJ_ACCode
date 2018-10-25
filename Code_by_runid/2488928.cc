#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <algorithm>
#define timespec DFGHJKLKJHGF
#include <iomanip>
using namespace std;

class Array {
public:
	vector<int> vec;
	friend istream& operator >> (istream& in, Array& A) {
		int N, t;
		in >> N;
		for (int i = 0; i < N; i++) {
			in >> t;
			A.vec.push_back(t);
		}
		return in;
	}
	friend ostream& operator << (ostream& out, Array A) {
		unsigned int l = A.vec.size();
		for (unsigned int i = 0; i < l; i++) {
			if (i)
				out << ' ';
			out << A.vec[i];
		}
		out << endl;
		return out;
	}
	Array operator - (int t) {
		vector<int>::iterator p = vec.begin();
		for (; p != vec.end(); ) {
			if (*p == t) {
				p = vec.erase(p);
			}
			else
				p++;
		}
		return *this;
	}
};
int main()
{
    int a;
    Array arr;
    cin>>arr;
    cout<<arr;
    cin>>a;
    arr = arr - a;
    cout<<arr;
    return 0;
}

/**************************************************************
	Problem: 2209
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:20 ms
	Memory:1276 kb
****************************************************************/

