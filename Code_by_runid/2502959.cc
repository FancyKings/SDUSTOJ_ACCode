#include <bits/stdc++.h>

using namespace std;

class Role
{
public:
    string name;
    int hp, ce, de, fa;
    Role(string n, int h, int c, int d, int f):name(n),hp(h),ce(c),de(d),fa(f)
    {
        ;
    }
    void combat(Role& a)
    {
        int npm = 0;
        int flag = 1;
        while(flag)
        {
            if(hp <= 0)
            {
                flag = 2;
                break;
            }
            if(a.hp <= 0)
            {
                flag = 3;
                break;
            }
            if(!npm)
            {
                if(fa >= a.fa)   // i hit u
                {
                    npm = 1;
                    cout << name << " attacks " << a.name << ":" << a.name << " ";

                    if(a.de >= ce)
                    {
                        a.hp--;
                    }
                    else
                    {
                        a.hp  -= (ce - a.de);
                        if(a.hp < 0)
                            a.hp = 0;
                    }
                    a.de--;
                    if(a.de < 0)
                        a.de = 0;
                    cout << "hp=" << a.hp << ",de=" << a.de << endl;
                }
                else  // u hit i
                {
                    npm = 2;
                    cout << a.name << " attacks " << name << ":" << name << " ";

                    if(de >= a.ce)
                    {
                        hp--;
                    }
                    else
                    {
                        hp -= (a.ce - de);
                        if(hp < 0)
                            hp = 0;
                    }
                    de--;
                    if(de < 0)
                        de = 0;
                    cout << "hp=" << hp << ",de=" << de << endl;
                }
            }
            else if(npm == 1)
            {
                npm = 2;
                cout << a.name << " attacks " << name << ":" << name << " ";
                if(de >= a.ce)
                {
                    hp--;
                }
                else
                {
                    hp -= (a.ce - de);
                    if(hp < 0)
                        hp = 0;
                }
                de--;
                if(de < 0)
                    de = 0;
                cout << "hp=" << hp << ",de=" << de << endl;
            }
            else
            {
                npm = 1;
                cout << name << " attacks " << a.name << ":" << a.name << " ";

                if(a.de >= ce)
                {
                    a.hp--;
                }
                else
                {
                    a.hp  -= (ce - a.de);
                    if(a.hp < 0)
                        a.hp = 0;
                }
                a.de--;
                if(a.de < 0)
                    a.de = 0;
                cout << "hp=" << a.hp << ",de=" << a.de << endl;
            }
        }
        if(flag == 2)
        {
            cout << a.name << " wins." << endl;
        }
        else
        {
            cout << name << " wins." << endl;
        }
    }
};
int main()
{
    int a, b, c, d;
    string name;
    cin>>name>>a>>b>>c>>d;
    Role one(name, a, b, c, d);
    cin>>name>>a>>b>>c>>d;
    Role two(name, a, b, c, d);
    one.combat(two);
    return 0;
}
/**************************************************************
	Problem: 2214
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1272 kb
****************************************************************/

