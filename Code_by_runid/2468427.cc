#include <bits/stdc++.h>

using namespace std;

class Char{
public:
    char c;
    Char(char a):c(a){};
    char change(){
        if(c >= 'a' && c <= 'z'){
            return (c - 32);
        }
        else if(c >= 'A' && c <= 'Z'){
            return (c + 32);
        }
        else
            return c;
    }
};

int main()
{
    char ch;
    while(cin>>ch)
    {
        Char c(ch);
        cout<<c.change()<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2091
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

