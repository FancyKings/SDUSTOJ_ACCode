#include <bits/stdc++.h>
#include <cctype>

using namespace std;

class Character{
private:
    char c;
public:
    Character(char temp)
    {
        c = temp;
    }
    void show()
    {
        cout << c;
    }
    Character& toUpper()
    {
        if(c >= 'a' && c <= 'z')
            c -= 32;
        return *this;
    }
    Character& toLower()
    {
        if(c >= 'A' && c <= 'Z')
            c += 32;
        return *this;
    }
};

int main()
{
    int cases;
    char c;
    cin>>cases;
    cout<<"char"<<" upper"<<" lower"<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>c;
        Character character(c);
        character.show();
        cout<<"    ";
        character.toUpper().show();
        cout<<"     ";
        character.toLower().show();
        cout<<endl;
    }
}
/**************************************************************
	Problem: 1817
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

