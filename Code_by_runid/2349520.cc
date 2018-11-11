#include <bits/stdc++.h>

using namespace std;

int ID = 0;

class Student
{
private:
    char * name;
    int numOfScores;
    int * scores;
    int id;
public:
    Student(char* s = NULL,int* ss = NULL,int num = 0):name(s),numOfScores(num),scores(ss),id(++ID)
    {
        cout << "A student whose name is \"" << name << "\" and id is " << id << " is created!" << endl;
    }
    ~Student()
    {
        cout << "A student whose name is \"" << name << "\" and id is " << id << " is erased!" << endl;
    }
    void showStudent()
    {
        cout << "This student is \"" << name << "\" whose id is "  << id << "." << endl;
        cout << "This student's scores are:";
        int* temp = scores;
        for(int i = 0;i < numOfScores;i++)
        {
            cout << ' ' << *(temp+i);
        }
        cout << endl;
    }
};

int main()
{
    int cases;
    char *str;
    int maxLenOfString, numOfCourses;
    int *scores;

    cin>>cases>>maxLenOfString>>numOfCourses;
    str = new char[maxLenOfString + 1];
    scores = new int[numOfCourses];
    for (int i = 0; i < cases; i++)
    {
        cin>>str;
        for (int j = 0; j < numOfCourses; j++)
            cin>>scores[j];
        Student stu(str,scores,numOfCourses);
        stu.showStudent();
    }
    return 0;
}
/**************************************************************
	Problem: 1776
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

