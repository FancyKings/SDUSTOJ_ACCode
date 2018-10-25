#include <bits/stdc++.h>

using namespace std;

class Vec{
public:
    set<int> s;
    friend istream& operator >> (istream& in,Vec& V){
        int l, t;
        in >> l;
        for(int i = 0;i < l; i++){
            cin >> t;
            V.s.insert(t);
        }
        return in;
    }
    friend ostream& operator << (ostream& out,Vec V){
        set<int>::iterator p = V.s.begin();
        while(p != V.s.end()){
            if(p != V.s.begin())
                cout << ' ';
            cout << *p;
            p++;
        }
        cout << endl;
        return out;
    }
    Vec operator + (Vec V){
        Vec ans;
        set<int>::iterator p = s.begin();
        while(p != s.end()){
            ans.s.insert(*p);
            p++;
        }
        p = V.s.begin();
        while(p != V.s.end()){
            ans.s.insert(*p);
            p++;
        }
        return ans;
    }
};
int main()
{
    Vec v1, v2, v3;
    cin>>v1;
    cin>>v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    v3 = v1 + v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    cout<<"v3:"<<v3;
    return 0;
}

/**************************************************************
	Problem: 2094
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

