#include <bits/stdc++.h>

using namespace std;

class Teacher{
public:
    double s;
    friend class School;
    Teacher(double k = 0):s(k){
        cout << "A teacher with salary " << s << " is created." << endl;
    }
    ~Teacher(){
        cout << "A teacher with salary " << s << " is erased." << endl;
    }
};


class Student{
public:
    int g;
    friend class School;
    Student(int t = 0):g(t){
        cout << "A student grade " << g << " is created." << endl;
    }
    ~Student(){
        cout << "A student grade " << g << " is erased." << endl;
    }
};

class School{
public:
    Student S;
    Teacher T;
    School(int k = 0,double a = 0):T(a),S(k){
        cout << "A school is created." << endl;
    }
    ~School(){
        cout << "A school is erased." << endl;
    }
};

int main()
{
    int g;
    double s;
    cin>>g>>s;
    School sch(g, s);
    cin>>g;
    Student stu(g);
    cin>>s;
    Teacher tea(s);
    School(g, s);
    return 0;
}
/**************************************************************
	Problem: 2193
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

