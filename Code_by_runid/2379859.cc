#include <bits/stdc++.h>

using namespace std;

multiset<int,greater<int> > a;

class Person
{
public:
    string name;
    int age;
public:
    Person(string a = "",int b = 0):name(a),age(b){
        cout << "A person " << name << " whose age is "
        << age << " is created." << endl;
    }
    ~Person(){
        cout << "A person " << name << " whose age is "
        << age << " is erased." << endl;
    }
    void show(){
        cout << "Name is " << name << " and age is " << age << "." << endl;
    }
};

class Student: public Person
{
public:
    int g;
public:
    Student(string a = "",int b = 0,int c = 0):Person(a,b),g(c)
    {
        cout << "A student whose grade is " << g << " is created." << endl;
    }
    ~Student(){
        cout << "A student whose grade is " << g << " is erased." << endl;
    }
    void show(){
        cout << "Grade is " << g << "." << endl;
    }
};



int main()
{
    string n;
    int a, g;
    cin>>n>>a>>g;
    Student student(n, a, g);
    student.Person::show();
    student.show();
    return 0;
}
/**************************************************************
	Problem: 1824
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

