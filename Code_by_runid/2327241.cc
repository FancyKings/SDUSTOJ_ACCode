
#include <bits/stdc++.h>

using namespace std;

class Character
{
private:
    char _c;
public:
    Character()
    {
        _c = ' ';
        cout << "Default constructor is called!" << endl;
    }
    Character(char c)
    {
        _c = c;
        cout << "Character " << _c << " is created!" << endl;
    }
    void setCharacter(char c)
    {
        _c = c;
        //cout << "Character a is created!" << endl;
    }
    const int getAsciiCode()const
    {
        return (int)_c;
    }
    const char getCharacter()const
    {
        return _c;
    }
    ~Character()
    {
        cout << "Character " << _c << " is erased!" << endl;
    }
};

int main()
{
    char ch;
    Character ch1, ch2('a');
    cin>>ch;
    ch1.setCharacter(ch);
    cout<<"ch1 is "<<ch1.getCharacter()<<" and its ASCII code is "<<ch1.getAsciiCode()<<"."<<endl;
    cout<<"ch2 is "<<ch2.getCharacter()<<" and its ASCII code is "<<ch2.getAsciiCode()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1774
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

