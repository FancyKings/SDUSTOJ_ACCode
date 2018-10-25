#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <functional>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
typedef long long LL;
using namespace std;

char change(char c){
    if(c >= 'A' && c <= 'Z'){
        c += 32;
    }
    return c;
}

class Operation{
public:
    vector<int> vec;
    stack<int> stak;
    vector<char> op;
    vector<int> res;
    void inputData(){
        int temp;
        while(cin >> temp && temp){
            vec.push_back(temp);
        }
    }
    void inputOpers(){
        char cmd;
        while(cin >> cmd && change(cmd) != 'e'){
            char opt = change(cmd);
            if(opt != 'i' && opt != 'o')
                continue;
            op.push_back(change(cmd));
        }
    }
    void showResult(){
        cout << "The pop sequence is:";
        int have = 0;
//        int now = 0;
        vector<char> ::iterator cp = op.begin();
        vector<int> ::iterator ip = vec.begin();
        for(; cp != op.end(); cp++){
            if(*cp == 'i'){
                if(ip != vec.end())
                    stak.push(*ip++);
            }
            else if(*cp == 'o'){
                if(stak.empty())
                    continue;
                int a = stak.top();
                stak.pop();
                cout << " " << a;
                have++;
            }
        }
        if(!have){
            cout << " Empty.";
        }
        cout << endl;
    }
    void clearData(){
        vec.clear();
        op.clear();
        res.clear();
        while(!stak.empty()){
            stak.pop();
        }
    }
};
int main()
{
    Operation myOp;
    int cases;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        myOp.clearData();
        myOp.inputData();
        myOp.inputOpers();
        myOp.showResult();
    }
    return 0;
}
/**************************************************************
	Problem: 1791
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1288 kb
****************************************************************/

