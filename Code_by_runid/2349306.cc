#include <bits/stdc++.h>

using namespace std;

class Person
{
private:
    char* name;
    int age;
public:
    Person():name("no name"),age(0)
    {
        cout << "A person whose name is \"no name\" and age is 0 is created!" << endl;
    }
    Person(char* s,int a)
    {
        name = new char[sizeof(s) * 2];
        name = s;
        age = a;
        cout << "A person whose name is \"" << name << "\" and age is " << age <<" is created!" << endl;
    }
    Person(const Person& P)
    {
        age = P.age;
        name = P.name;
        cout << "A person whose name is \"" << name << "\" and age is " << age << " is cloned!" << endl;
    }
    ~Person()
    {
        cout << "A person whose name is \"" << name << "\" and age is " << age << " is erased!" << endl;;
    }
    Person& setName(char* s)
    {
        name = new char[sizeof(s) * 2];
        name = s;
    };
    Person& setAge(int a)
    {
        age = a;
    };
    void showPerson()
    {
        cout << "This person is \"" << name << "\" whose age is " << age << "." << endl;
    }
};



int main()
{
    int cases;
    char str[80];
    int age;

    Person noname, Tom("Tom", 16), anotherTom(Tom);
    cin>>cases;
    for (int ca = 0; ca < cases; ca++)
    {
        cin>>str>>age;
        Person newPerson(str, age);
        newPerson.showPerson();
    }
    anotherTom.setName(str).setAge(18);
    anotherTom.showPerson();
    noname.showPerson();
    return 0;
}
/**************************************************************
	Problem: 1775
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

