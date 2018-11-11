#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <functional>
#include <utility>
#include <typeinfo>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#define timespec ASHAGHSSDFGHJK
#include <iomanip>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

class Publication
{
public:
	double price;
	int length;
	virtual double getTotalPrice() {
	}
	Publication(double a = 0, int b = 0): price(a), length(b) {
		cout << "Call Publication's constructor!" << endl;
	};
	double getPrice()const
	{
		return price;
	}
	int getLength()const
	{
		return length;
	}
	virtual ~Publication() {
		cout << "Call Publication's de-constructor!" << endl;
	};
};


class Book: public Publication
{
public:
	Book(double a = 0, int b = 0): Publication(a, b) {
		cout << "Call Book's constructor!" << endl;
	};
	double getTotalPrice() {return price * length;}
	~Book() {
		cout << "Call Book's de-constructor!" << endl;
	};
};

class Tape: public Publication
{
public:
	Tape(double a = 0, int b  = 0): Publication(a, b) {
		cout << "Call Tape's constructor!" << endl;
	};
	double getTotalPrice()
	{
		if (length % 10)
		{
			return (length / 10 + 1) * price * 1.0;
		}
		else
		{
			return (length / 10) * price * 1.0;
		}
	}
	~Tape() {
		cout << "Call Tape's de-constructor!" << endl;
	}
};


class BookStore
{
private:
    Publication **pubs;
    int num;
public:
    BookStore(Publication **p, int n)
    {
        pubs = new Publication*[n];
        num = n;
        for (int i = 0; i < n; i++)
        {
            if (typeid(*(p[i])) == typeid(Book))
            {
                pubs[i] = new Book(p[i]->getPrice(), p[i]->getLength());
            }
            else
            {
                pubs[i] = new Tape(p[i]->getPrice(), p[i]->getLength());
            }
        }
    }
    int getNumOfBook()
    {
        int c = 0;
        for (int i = 0; i < num; i++)
        {
            if (typeid(*(pubs[i])) == typeid(Book))
                c++;
        }
        return c;
    }
    int getNumOfTape()
    {
        int c = 0;
        for (int i = 0; i < num; i++)
        {
            if (typeid(*(pubs[i])) == typeid(Tape))
                c++;
        }
        return c;
    }
    ~BookStore()
    {
        for (int i = 0; i < num; i++)
        {
            delete pubs[i];
        }
        delete[] pubs;
        cout<<"Call BookStore's de-constructor!\n";
    }
};
int main()
{
    int cases, date;
    char type;
    double total,price;
    Publication **pub;
    cin>>cases;
    pub = new Publication*[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>price>>date;
        switch(type)
        {
        case 'B':
            pub[i] = new Book(price,date);
            break;
        case 'T':
            pub[i] = new Tape(price,date);
            break;
        }
    }
    BookStore bookStore(pub, cases);
    cout<<"There are "<<bookStore.getNumOfBook()<<" books and "<<bookStore.getNumOfTape()<<" tapes.";
    total = 0;
    for (int i = 0; i < cases; i++)
    {
        total += pub[i] -> getTotalPrice();
    }
    cout<<" Their total price is "<<setprecision(2)<<fixed<<total<<"."<<endl;
    for (int i = 0; i < cases; i++)
    {
        delete pub[i];
    }
    delete[] pub;
    return 0;
}
/**************************************************************
	Problem: 1783
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1272 kb
****************************************************************/

