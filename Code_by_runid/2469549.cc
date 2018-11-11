#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long LL;

class Song{
public:
    friend class Singer;
    friend class SingerList;
    string name;
    Song(string n):name(n){
        CntOfSongs++;
    };
    static int CntOfSongs;
    static int getCntOfSongs(){
        return CntOfSongs;
    }
    virtual int Rtrn() = 0;
    virtual void Prnt() = 0;
};

class Pop:public Song{
public:
    Pop(string n):Song(n){
        CntOfPops++;
    }
    static int CntOfPops;
    static int getCntOfPops(){
        return CntOfPops;
    }
    int Rtrn(){
        return 1;
    }
    void Prnt(){
        cout << "popular";
    }
};

class Folk:public Song{
public:
    Folk(string n):Song(n){
        CntOfFolks++;
    }
    static int CntOfFolks;
    static int getCntOfFolks(){
        return CntOfFolks;
    }
    int Rtrn(){
        return 2;
    }
    void Prnt(){
        cout << "folk";
    }
};

class Bel:public Song{
public:
    Bel(string n):Song(n){
        CntOfBels++;
    }
    static int CntOfBels;
    static int getCntOfBels(){
        return CntOfBels;
    }
    int Rtrn(){
        return 3;
    }
    void Prnt(){
        cout << "Bel Canto";
    }
};

class Singer{
public:
    friend class Song;
    friend class Pop;
    friend class Folk;
    friend class Bel;
    string name;
    static int CntOfSingers;
    static int getCntOfSingers(){
        return CntOfSingers;
    }
    vector<Song*> vecsong;
    Song* S;
    Singer(){
        //CntOfSingers++;
    };
    Singer(string me):name(me){
        CntOfSingers++;
    };
    void addASong(string s,int t){
        if(t == 1){
            S = new Pop(s);
        }
        else if(t == 2){
            S = new Folk(s);
        }
        else {
            S = new Bel(s);
        }
        vecsong.push_back(S);
    }
    void singASong(string s){
        int l = vecsong.size();
        int flag = -1;
        for(int i = 0;i < l; i++){
            if(vecsong[i]->name == s){
                flag = i;
                break;
            }
        }
        if(flag >= 0){
            cout << name << " sings " << s << " in " ;
            vecsong[flag]->Prnt();
            cout << " style." << endl;
        }
        else {
            cout << name << " doesn't sing " << s << '.' << endl;
        }
        return;
    }
};

class SingerList:public Singer{
public:
    friend class Song;
    friend class Pop;
    friend class Folk;
    friend class Bel;
    vector<Singer*> veclist;
    Singer* S;
    Song* G;
    SingerList(){};
    friend istream& operator >> (istream& in,SingerList& L){
        int N;
        in >> N;
        // cout << Singer::CntOfSingers << endl;
        for(int i = 0;i < N; i++){
            string singername;
            in >> singername;
            int M;
            in >> M;
            L.S = new Singer(singername);
            // cout << Singer::CntOfSingers << endl;
            for(int h = 0;h < M; h++){
                int t;
                string lx;
                in >> t >> lx;
                if(t == 1){
                    L.G = new Pop(lx);
                }
                else if(t == 2){
                    L.G = new Folk(lx);
                }
                else{
                    L.G = new Bel(lx);
                }
                L.S->vecsong.push_back(L.G);
            }
            L.veclist.push_back(L.S);
        }
        return in;
    }

    friend ostream& operator << (ostream& out,SingerList L){
        int l = L.veclist.size();
        for(int i = 0;i < l; i++){
            out << L.veclist[i]->name << " :";
            int ll = L.veclist[i]->vecsong.size();
            for(int k = 0;k < ll; k++){
                out << " " << L.veclist[i]->vecsong[k]->name;
            }
            out << endl;
        }
        return out;
    }

    void Choose(string a,string b){
        int l = veclist.size();
        int flag = -1;
        int i = 0;
        for(i = 0;i < l; i++){
            if(veclist[i]->name == a){
                flag = i;
                break;
            }
        }
        if(flag < 0){
            cout << "Singer " << a << " doesn't exist." << endl;
            return;
        }

        S = veclist[flag];// Singer
        flag = -1;
        int numsong = S->vecsong.size();
        for(int k = 0;k < numsong; k++){
            if(S->vecsong[k]->name == b){
                flag = k;
                break;
            }
        }
        if(flag < 0){
            cout << a << " doesn't sing " << b << "." << endl;
            return;
        }
        cout << a << " sings " << b << " in " ;
        // cout << i << "   "   << flag << endl;
        veclist[i]->vecsong[flag]->Prnt();
        cout << " style." << endl;
    }
};

int Pop::CntOfPops = 0;
int Folk::CntOfFolks = 0;
int Song::CntOfSongs = 0;
int Singer::CntOfSingers = 0;
int Bel::CntOfBels = 0;

int main()
{
    cout<<"In beginning, there are ";
    cout<<Singer::getCntOfSingers()<<" singers, and ";
    cout<<Song::getCntOfSongs()<<" songs."<<endl;
    Singer liuh("LiuHuan");
    liuh.addASong("XiongDi", 1);
    liuh.addASong("SanGuo", 2);
    liuh.addASong("SongBie", 3);
    liuh.singASong("XiongDi");
    liuh.singASong("SanGuo");
    liuh.singASong("SongBie");
    liuh.singASong("MeiYou");

    SingerList lst;
    string s1, s2;
    cin>>lst;
    cout<<lst;
    cout<<"Now, there are ";
    cout<<Singer::getCntOfSingers()<<" singers, and ";
    cout<<Song::getCntOfSongs()<<" songs. Including ";
    cout<<Pop::getCntOfPops()<<" pop songs, ";
    cout<<Folk::getCntOfFolks()<<" folk songs, and ";
    cout<<Bel::getCntOfBels()<<" Bel Canto songs."<<endl;
    while(cin>>s1>>s2)
    {
        lst.Choose(s1, s2);
    }
    return 0;
}

/**************************************************************
	Problem: 2093
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1288 kb
****************************************************************/

