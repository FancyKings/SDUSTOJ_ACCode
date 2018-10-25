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
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
typedef long long LL;
using namespace std;


class Person
{
public:
	string name;
public:
	Person(string a = ""): name(a)
	{
		cout << "Person " << name << " is created." << endl;
	};
	~Person()
	{
		cout << "Person " << name << " is erased." << endl;
	}
};

class Student: public Person
{
public:
	int id;
public:
	Student(string t = "",int a = 0): id(a),Person(t)
	{
		cout << "Student " << name
		     << " with id " << id << " is created." << endl;
	}
	~Student()
	{
		cout << "Student " << name
		     << " with id " << id << " is erased." << endl;
	}
};

class Teacher: public Person
{
public:
	string pos;
public:
	Teacher(string a = "", string b = ""): Person(a), pos(b)
	{
		cout << "Teacher " << a << " with position " << b << " is created." << endl;
	}
	~Teacher()
	{
		cout << "Teacher " << name << " with position " << pos << " is erased." << endl;
	}
};

class Course
{
public:
	Teacher T;
	Student S;
	string a;
	friend class Person;
	friend class Teacher;
	friend class Student;
public:
	Course(string b, string c, string d, string e, int i): T(c, d), S(c, i), a(e)
	{
		cout << "Course " << e << " is created." << endl;
	}
	~Course()
	{
		cout << "Course " << a << " is erased." << endl;
	}
};

int main()
{
    string s1, s2, s3, s4;
    int i;
    cin>>s1>>s2>>s3>>s4>>i;
    Person person1(s1), person2(s2);
    Teacher teacher(s1, s3);
    Student student(s2, i);
    Course course(s1, s2, s3, s4, i);
    return 0;
}
/**************************************************************
	Problem: 2057
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

