#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    string name;
    int score;
public:
    Student():name(""),score(0){};
    void setStudent(string s,int n){
        name = s;
        score = n;
    };
    int operator > (const Student & t)
    {
        if(score == t.score )
            return name < t.name;
        return score > t.score;
    }
    friend ostream& operator << (ostream& out,const Student& s)
    {
        out << s.score << ' ' << s.name;
        return out;
    }
};

int main()
{
    int cases;
    string name;
    int score;
    cin>>cases;
    Student students[cases], temp;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>score;
       students[i].setStudent(name, score);
    }
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < cases - i - 1; j++)
        {
            if (!(students[j] > students[j + 1]))
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cases; i++)
        cout<<students[i]<<endl;
    return 0;
}
/**************************************************************
	Problem: 1785
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

