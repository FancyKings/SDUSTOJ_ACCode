#include <bits/stdc++.h>

using namespace std;
const double PI = 3.14;



template <typename T>
class DataVector
{
private:
    vector<T> members;//è¡¨ç¤ºè¯¥æ°ç»ä¸­çææåç´ 
public:
    void show()
    {
        unsigned int l = members.size();
        for(unsigned int i = 0;i < l; i++)
        {
            if(i)
                cout << " " << members[i];
            else
                cout << members[i];
        }
        cout << '\n';
    }
    T getSum()
    {
        unsigned int l = members.size();
        T ans = 0;
        for(unsigned int i = 0;i < l; i++)
        {
            ans += members[i];
        }
        return ans;
    }
    void clearVector()
    {
        members.clear();
    }
    vector<T>& getVector()
    {
        return members;
    }
};

int main()
{
    int cases, num, iData;
    double dData;
    DataVector<int> iVector;
    DataVector<double> dVector;
    char type;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>type;
        switch(type)
        {
        case 'i':
            iVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>iData;
                iVector.getVector().push_back(iData);
            }
            iVector.show();
            cout<<iVector.getSum()<<endl;
            break;
        case 'd':
            dVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>dData;
                dVector.getVector().push_back(dData);
            }
            dVector.show();
            cout<<setprecision(2)<<fixed<<dVector.getSum()<<endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1789
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

