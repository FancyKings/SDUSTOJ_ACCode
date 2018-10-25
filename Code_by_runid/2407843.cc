#include <bits/stdc++.h>

using namespace std;

class Fruit
{
public:
    string s;
    virtual void input() = 0;
    virtual double total() = 0;
};

class Apple:public Fruit
{
public:
    double p,t;
    void input()
    {
        cin >> p >> t;
        t *= 30;
    }
    double total()
    {
        return (p*t);
    }
};


class Banana:public Fruit
{
public:
    double p,t;
    void input()
    {
        cin >> p >> t;
        t *= 25;
    }
    double total()
    {
        return (p*t);
    }
};



class Pear:public Fruit
{
public:
    double p,t;
    void input()
    {
        cin >> p >> t;
        t *= 20;
    }
    double total()
    {
        return (p*t);
    }
};

int main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;

     return 0;
}

/**************************************************************
	Problem: 1670
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

