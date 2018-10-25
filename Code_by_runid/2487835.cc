#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
	return (b) ? (GCD(b,a%b)) : (a);
}
int D(int t) {
	return (t >= 0) ? (t) : (-t);
}

template <class T>
class Array {
public:
	int n;
	T *num;
	Array(int a) :n(a) {
		num = NULL;
		num = new T[(int)n * 2];
	};
	void input(int a)
	{
		for (int i = 0; i < a && i < n; i++)
		{
			cin >> num[i];
		}
		return;
	}
	T& operator [](int i)
	{
		return num[i];
	}
};


class Fract {
public:
	int u, d;
	Fract(int a = 0, int b = 1) {
		int t = GCD(a, b);
		if (t) {
			u = a / t;
			d = b / t;
		}
	}
	void show() {
		if (u == 0 || d == 1) {
			cout << u << endl;
		}
		else if (u * d < 0) {
			cout << '-' << D(u) << "/" << D(d) << endl;
		}
		else {
			cout << D(u) << "/" << D(d) << endl;
		}
		return;
	}
	Fract &operator +=(Fract &x) {
		Fract y(x.u*d + x.d*u, x.d*d);
		return *this = y;
	}
	friend istream& operator >> (istream& in, Fract& f) {
		in >> f.u >> f.d;
		return in;
	}
};

int main()
{
    int  n;
    cin >> n;
    Array<double> db(1000);
    db.input(n);
    double dbsum(0.0);
    for(int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(1000);
    fr.input(n);
    Fract frsum(0, 1);
    for(int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}

/**************************************************************
	Problem: 1680
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

