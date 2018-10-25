#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long LL;

class Person{
public:
    int age;
    char sex;
    Person(int a,char s):age(a),sex(s){
        cout << "Person age = " << age << ", sex = " << sex << " is created." << endl;
    };
    virtual ~Person(){
        cout << "Person age = " << age << ", sex = " << sex << " is erased." << endl;
    }
};

class Student:public Person{
public:
    int cid;
    Student(int a,char s,int p):Person(a,s),cid(p){
        cout << "Student of class " << cid << " is created." << endl;
    };
    ~Student(){
        cout << "Student of class " << cid << " is erased." << endl;
    }
};

class Teacher:public Person{
public:
    int money;
    Teacher(int a,char s,int p):Person(a,s),money(p){
        cout << "Teacher with salary " << money << " is created." << endl;
    };
    ~Teacher(){
        cout << "Teacher with salary " << money << " is erased." << endl;
    }
};
int main()
{
    Person *p;
    int age, par;
    char sex, t;
    while (cin>>age>>sex>>t>>par)
    {
        if (t == 's')
        {
            p = new Student(age, sex, par);
        }
        else
        {
            p = new Teacher(age, sex, par);
        }
        delete p;
    }

}

/**************************************************************
	Problem: 2092
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

