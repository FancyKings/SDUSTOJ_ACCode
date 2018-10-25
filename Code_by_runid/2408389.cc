#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14;

class Vechicle
{
public:
    int speed;
    static int numOfVechicle;
    static int getNumOfVechicles()
    {
        return numOfVechicle;
    }
    Vechicle(int n = 0):speed(n){};
    virtual ~Vechicle()
    {
        cout << "A vechicle is deleted." << endl;
    }
    virtual void show () = 0;
};

class Bike:public Vechicle
{
public:
    int s;
    Bike(int a = 0):s(a){numOfVechicle++;};
    void show()
    {
        cout << "A bike's speed is " << s << "km/h." << endl;
    }
    virtual ~Bike()
    {
        cout << "A bike is deleted." << endl;
    }
};


class Car:public Vechicle
{
public:
    int s;
    Car(int a = 0):s(a){numOfVechicle++;};
    void show()
    {
        cout << "A car's speed is " << s << "km/h." << endl;
    }
    virtual ~Car()
    {
        cout << "A car is deleted." << endl;
    }
};



class MotoBike:public Vechicle
{
public:
    int s;
    MotoBike(int a = 0):s(a){numOfVechicle++;};
    void show()
    {
        cout << "A motobike's speed is " << s << "km/h." << endl;
    }
    virtual ~MotoBike()
    {
        cout << "A motobike is deleted." << endl;
    }
};

class Person
{
public:
    string n;
    Person(string a = ""):n(a){};
    void drive(Vechicle& V)
    {
        cout << n << " drives. " ;
        V.show();
    }
};


int Vechicle::numOfVechicle = 0;




int main()
{
    int cases, n;
    char c;
    string name;
    Vechicle* vechicle;
    cout<<"In beginning, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>c>>n;
        Person person(name);
        switch (c)
        {
        case 'B':
            vechicle = new Bike(n);
            break;
        case 'M':
            vechicle = new MotoBike(n);
            break;
        case 'C':
            vechicle = new Car(n);
            break;
        }
        person.drive(*vechicle);
        delete vechicle;
    }
    cout<<"At the end, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1827
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

