#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14;


class Automobile
{
public:
    double s;
    virtual void run () const = 0;
    virtual ~Automobile()
    {
        cout << "An automobile is erased!" << endl;
    }
};


class Benz:public Automobile
{
public:
    double s;
    Benz(double a = 0):s(a) {};
    ~Benz()
    {
        cout << "A Benz is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Benz at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Buick:public Automobile
{
public:
    double s;
    Buick(double a = 0):s(a) {};
    ~Buick()
    {
        cout << "A Buick is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Buick at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Zhongba:public Automobile
{
public:
    double s;
    Zhongba(double a = 0):s(a) {};
    ~Zhongba()
    {
        cout << "A Zhongba is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Zhongba at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Beiqi:public Automobile
{
public:
    double s;
    Beiqi(double a = 0):s(a) {};
    ~Beiqi()
    {
        cout << "A Beiqi is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Beiqi at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Dayu:public Automobile
{
public:
    double s;
    Dayu(double a = 0):s(a) {};
    ~Dayu()
    {
        cout << "A Dayu is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Dayu at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Jianghuai:public Automobile
{
public:
    double s;
    Jianghuai(double a = 0):s(a) {};
    ~Jianghuai()
    {
        cout << "A Jianghuai is erased!" << endl;
    }
    void run()const
    {
        cout<<setiosflags(ios::fixed)<<"Jianghuai at speed of "<<setprecision(2)<<s<<"km/h."<<endl;
    }
};

class Driver
{
public:
    string name;
    char type;
    Driver(string a = "" , char b = 'A'):name(a),type(b) {};
    void Drive(Automobile *);
    ~Driver() {};
};




void Driver::Drive(Automobile *automobile)
{
    switch (type)
    {
    case 'A':
        cout<<"Driver "<<name<<" can drive ";
        automobile->run();
        break;
    case 'B':
        if (typeid(*automobile) == typeid(Dayu) || typeid(*automobile) == typeid(Jianghuai))
            cout<<"Driver "<<name<<" cannot drive large bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    case 'C':
        if (typeid(*automobile) != typeid(Benz) && typeid(*automobile) != typeid(Buick))
            cout<<"Driver "<<name<<" cannot drive bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    }
}
int main()
{
    string name;
    char type;
    double speed;
    char automobileType;
    int cases;
    Automobile *automobile;


    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>type>>automobileType>>speed;
        Driver driver(name, type);
        switch (automobileType)
        {
        case 'a':
            automobile = new Benz(speed);
            break;
        case 'b':
            automobile = new Buick(speed);
            break;
        case 'c':
            automobile = new Zhongba(speed);
            break;
        case 'd':
            automobile = new Beiqi(speed);
            break;
        case 'e':
            automobile = new Dayu(speed);
            break;
        case 'f':
            automobile = new Jianghuai(speed);
            break;
        }
        driver.Drive(automobile);
        delete automobile;
    }
    return 0;
}
/**************************************************************
	Problem: 1781
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

