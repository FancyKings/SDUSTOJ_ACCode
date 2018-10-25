#include <bits/stdc++.h>
// DeBug For Dr.Hun
using namespace std;
class Person
{
public:
	string name;
	int age;
	char sex;
	string add, phone;
	Person(string n, int a, char s, string add_, string p) : name(n), age(a), sex(s), add(add_), phone(p) {}
	//    Person() {}
};
class Student : virtual public Person
{
public:
	string OWNMAJOR;
	Student(string n, int a, char s, string add_, string p, string m) : Person(n, a, s, add_, p), OWNMAJOR(m) {}
	void setTel(string m) { phone = m; }
};
class Cadre : virtual public Person
{
public:
	string post;
	Cadre(string n, int a, char s, string add_, string p, string post_) : Person(n, a, s, add_, p), post(post_) {}
	void setTel(string m) { phone = m; }
};
class Student_Cadre : virtual public Student, virtual public Cadre
{
public:
	float wage;
	Student_Cadre(string n, int a, char s, string add_, string p, string m, string post_, float w)
		: Person(n, a, s, add_, p), Student(n, a, s, add_, p, m), Cadre(n, a, s, add_, p, post_), wage(w) {}
	void setAddr(string a) { add = a; }
	void display()
	{
		cout << "name:" << name << endl;
		cout << "age" << age << endl;
		cout << "sex:" << sex << endl;
		cout << "address:" << add << endl;
		cout << "tel:" << phone << endl;
		cout << "major:" << OWNMAJOR << endl;
		cout << "post:" << post << endl;
		cout << "wages:" << wage << endl;
	}

};


int main( )
{
    string name, major, post, addr, tel;
    int age;
    char sex;
    float wage;
    cin>>name>>age>>sex>>addr>>tel>>major>>post>>wage;

    Student_Cadre st_ca(name, age, sex,  addr, tel, major, post,wage);
    st_ca.display( );

    cout<<endl;
    string newAddr, newTel1, newTel2;
    cin>>newAddr>>newTel1>>newTel2;

    st_ca.setAddr(newAddr);
    st_ca.Student::setTel(newTel1);
    st_ca.Cadre::setTel(newTel2);
    st_ca.display( );
    return 0;
}
/**************************************************************
	Problem: 1537
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

