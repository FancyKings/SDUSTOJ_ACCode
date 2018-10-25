#include <bits/stdc++.h>

using namespace std;


class Person
{
public:
    virtual void input() = 0;
    virtual void show() = 0;
    virtual int pay() = 0;
};

class Manager:public Person
{
public:
    string n;
    Manager(string s = ""):n(s){};
    int v;
    void input()
    {
        cin >> v;
    }
    void show()
    {
        cout << n << " (Manager)";
    }
    int pay()
    {
        return v * 1000;
    }
};

class Employee:public Person
{
public:
    string n;
    Employee(string s = ""):n(s){};
    int v,up;
    void input()
    {
        cin >> v >> up;
    }
    void show()
    {
        cout << n << " (Employee)";
    }
    int pay()
    {
        return (up + 12) * v * 1000;
    }
};

class HourlyWorker:public Person
{
public:
    string n;
    HourlyWorker(string s = ""):n(s){};
    int v,up;
    void input()
    {
        cin >> v >> up;
    }
    void show()
    {
        cout << n << " (HourlyWorker)";
    }
    int pay()
    {
        return (up * v);
    }
};


class CommWorker:public Person
{
public:
    string n;
    CommWorker(string s = ""):n(s){};
    int v,up;
    void input()
    {
        cin >> v >> up;
    }
    void show()
    {
        cout << n << " (CommWorker)";
    }
    int pay()
    {
        return (v * 1000 * 12 + up * 20);
    }
};




int main()
{
    Person *person;
    string name, job;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> job >> name;
        if(job == "Manager")
            person = new Manager(name);
        if(job == "Employee")
            person = new Employee(name);
        if(job == "HourlyWorker")
            person = new HourlyWorker(name);
        if(job == "CommWorker")
            person = new CommWorker(name);
        person->input();
        person->show();
        cout << " Annual Salary is " << person->pay() << "." << endl;
    }

}

/**************************************************************
	Problem: 1679
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

