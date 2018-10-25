#include <bits/stdc++.h>

using namespace std;
const double PI = 3.14;

class Orgnization
{
public:
    string name;
    string boss;
    Orgnization(string a,string b):name(a),boss(b){};
    virtual void show() = 0;
};

class College:public Orgnization
{
public:
    College(string a,string b):Orgnization(a,b){};
    void show()
    {
        cout << "Dean of " << name << " is " << boss << endl;
    }
};

class Department:public Orgnization
{
public:
    Department(string a,string b):Orgnization(a,b){};
    void show()
    {
        cout << "Director of " << name << " is " << boss << endl;
    }
};
int main()
{
    vector<Orgnization*> university;
    vector<Orgnization*>::iterator itr;
    int n, i, t;
    string str1, str2;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>t;
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        if (t == 0)
            university.push_back(new College(str1, str2));
        else
            university.push_back(new Department(str1, str2));
    }
    for (itr = university.begin(); itr != university.end(); itr++)
        (*itr)->show();
    return 0;
}

/**************************************************************
	Problem: 2070
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

