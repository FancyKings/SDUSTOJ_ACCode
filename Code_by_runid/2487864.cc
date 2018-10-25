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

class Book {
public:
    string name;
    double p;
    Book(): name(""), p(0) {
        cout << "A default book is created." << endl;
    }
    Book(string n, double pp): name(n), p(pp) {
        cout << "A book " << name << " is created." << endl;
    }
    string getName() {
        return name;
    }
    double getPrice() {
        return p;
    }
    void setName(string n) {
        name = n;
    }
    void setPrice(double d) {
        p = d;
    }
    ~Book() {
        cout << "A book " << name << " is erased." << endl;
    }
};

int main()
{
    Book books[4]={Book("C++", 42.0)};
    string tmp;
    double sum, price;
    int i;
    for (i = 0; i < 3; i++)
    {
        cin>>tmp>>price;
        books[i + 1].setName(tmp);
        books[i + 1].setPrice(price);
    }
    sum = 0;
    for (i = 0; i < 4; i++)
    {
        sum += books[i].getPrice();
    }
    cout<<"The four books are: " << books[0].getName();
    for (i = 1; i < 4; i++)
    {
        cout<<" "<<books[i].getName();
    }
    cout<<endl<<"Their total price is "<<sum<<endl;
    return 0;
}
/**************************************************************
	Problem: 2051
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

