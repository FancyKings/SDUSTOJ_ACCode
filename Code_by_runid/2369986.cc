#include <bits/stdc++.h>

using namespace std;

class Animal
{
    friend class AnimalList;
private:
    string name;
    int num;
public:
    Animal():name(""),num(0) {};
    void setAnimal(string& t,int& a)
    {
        name = t;
        num = a;
    }
    const string getName()const
    {
        return name;
    }
    const int getNum()const
    {
        return num;
    }
    Animal& operator = (const Animal& a)
    {
        name=a.name;
        num=a.num;
        return *this;
    }
};

class AnimalList
{
    friend class Animal;
private:
    Animal * anm;
    int numOfAnimal;
public:
    AnimalList(Animal* a,int b):anm(a),numOfAnimal(b) {};
    int operator [](string n)
    {
        int ans = -1;
        for(int i = 0; i < numOfAnimal; i++)
        {
            if(n == anm[i].name)
            {
                ans = anm[i].num;
                break;
            }
        }
        return ans;
    }
};


int main()
{
    int cases;
    string name;
    int num;
    cin>>cases;
    Animal animals[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>num;
        animals[i].setAnimal(name, num);
    }
    AnimalList animalList(animals, cases);

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name;
        if (animalList[name] != -1)
            cout<<"There are "<<animalList[name]<<" "<<name<<"s."<<endl;
        else
            cout<<"There is none "<<name<<"."<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1786
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

