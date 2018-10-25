#include <bits/stdc++.h>

using namespace std;

class CharGraph
{
private:
    int n;
    char c;
public:
    void print()
    {
        if(!n)
            cout << endl;
        else if(n > 0)
        {
            for(int i = 0;i < n;i++)
            {
                for(int j = 0;j <= i ;j++)
                {
                    cout << c ;
                }
                cout << endl;
            }
        }
        else
        {
            for(int i = 0;i < - n ;i++)
            {
                for(int j = 0; j < - i - n ; j++)
                {
                    cout << c;
                }
                cout << endl;
            }
        }
    }
    CharGraph():n(0),c(0){};
    CharGraph(int a,char t):n(a),c(t){};
};

int main()
{
    int cases, n;
    char c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>n>>c;
        CharGraph cGraph(n, c);
        cGraph.print();
    }
    return 0;
}
/**************************************************************
	Problem: 1826
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

