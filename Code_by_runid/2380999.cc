#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    bool sex;
    int g;
    Student* next;
public:
    Student(string a="",bool b = true,int c = 0):name(a),sex(b),g(c),next(NULL)
    {
        cout << "A student named by " << name << " is created!" << endl;
    };
    ~Student()
    {
        cout << "A student named by " << name << " is erased." << endl;
    }
    void showInfo()
    {
        cout << "name = " << name << ", sex = " << sex << ", grade = " << g << ";";
    }
    Student* getNext()
    {
        return next;
    }
    void setNext(Student* a)
    {
        next = a;
    }
};

class StudentCadre:public Student
{
public:
    string pos;
public:
    StudentCadre(string a = "",bool b = true,int c = 0,string d = ""):Student(a,b,c),pos(d)
    {
        cout << "A student cadre with position " << pos << " is created." << endl;
    };
    ~StudentCadre()
    {
        cout << "A student named by " << name << " is erased." << endl;
    }
    void showInfo()
    {
        Student::showInfo();
        cout << " position = " << pos << ".";
    }
};




int main()
{
    int num;
    string name, position;
    bool sex;
    int grade;
    Student *header, *student, *curStudent;

    cin>>name>>sex>>grade>>position;
    header = new StudentCadre(name, sex, grade,position);
    curStudent = header;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>name>>sex>>grade;
        student = new Student(name, sex, grade);
        curStudent -> setNext(student);
        curStudent = curStudent -> getNext();
    }
    ((StudentCadre*)header) -> showInfo();
    cout<<endl;
    curStudent = header;
    while (curStudent -> getNext() != NULL)
    {
        curStudent = curStudent -> getNext();
        curStudent->showInfo();
        cout<<endl;
    }

    curStudent = header;
    while (curStudent != NULL)
    {
        student = curStudent;
        curStudent = curStudent -> getNext();
        delete student;
    }
    return 0;
}
/**************************************************************
	Problem: 1780
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

