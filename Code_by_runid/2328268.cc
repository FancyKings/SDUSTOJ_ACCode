#include <bits/stdc++.h>

using namespace std;


class Character
{
public:
    char c;
    friend istream& operator >> (istream&,Character&);
    char operator + (int a)
    {
        return (c  + a % 26 - 'a' + 26 ) % 26 + 'a';
    }
    char operator - (int a)
    {
        return (c  - a % 26 - 'a' + 26 ) % 26 + 'a';
    }
};
istream& operator >> (istream& i,Character& c)
{
    i>>c.c;
    return i;
}

int main()
{
    int cases, data;
    Character ch;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>data;
        cout<<(ch + data)<<" "<<(ch - data)<<endl;
    }
}
/**************************************************************
	Problem: 1812
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

