#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14;

class Shape {
public:
	friend class UserList;
	friend class User;
	static int cntOfShapes;
	Shape() {
		cntOfShapes += 1;
	}
	static int getCntOfShapes() {
		return cntOfShapes;
	}
	virtual double Rtrns() = 0;
	virtual void prnt() = 0;
};

class Rectangle :public Shape {
public:
	friend class UserList;
	friend class User;
	static int cntOfRects;
	static int getCntOfRects() {
		return cntOfRects;
	}
	double c, k;
	Rectangle(double a = 0,double b = 0):c(a),k(b) {
		cntOfRects += 1;
	}
	double Rtrns() {
		return (c * k);
	}
	void prnt() {
		cout << "rect(" << c << "," << k << ")";
	}
};

class Circle :public Shape {
public:
	friend class User;
	friend class UserList;
	static int cntOfCircles;
	static int getCntOfCircles() {
		return cntOfCircles;
	}
	double r;
	Circle(double x = 0) :r(x) {
		cntOfCircles += 1;
	}
	double Rtrns() {
		return (pi * r * r);
	}
	void prnt() {
		cout << "circle(" << r << ")";
	}
};

class User {
public:
	friend class Shape;
	friend class Rectangle;
	friend class Circle;
	friend class UserList;
	Shape *S;
	vector<Shape*> shapevec;
	string name;
	static int cntOfUsers;
	static int getCntOfUsers() {
		return cntOfUsers;
	}
	User(string t) :name(t) {
		cntOfUsers += 1;
	};
	void addAShape(int t, double a, double b = 0) {
		if(t&1){
			S = new Rectangle(a, b);
			shapevec.push_back(S);
		}
		else {
			S = new Circle(a);
			shapevec.push_back(S);
		}
	}
	double getArea() {
		unsigned int l = shapevec.size();
		double ans = 0;
		for (unsigned int i = 0; i < l; i++) {
			S = shapevec[i];
			ans += S->Rtrns();
		}
		return ans;
	}
};

class UserList {
public:
	friend class User;
	friend class Circle;
	friend class Rectangle;
	friend class Shape;
	vector<User*> usrvec;
	Shape* S;
	static int cntOfUserLists;
	static int getCntOfUserList() {
		return cntOfUserLists;
	}
	User* U;
	unsigned int GetSize() {
		return usrvec.size();
	}
	void showTotalArea(string s) {
		unsigned int l = usrvec.size();
		int flag = -1;
		// 姓名匹配失败“Tom”
		for (unsigned int i = 0; i < l; i++) {
			U  = usrvec[i];
			string t = U->name;
			// cout << t << "++++++++++" << s << endl;// 正在匹配串
			if (s == t) {
				flag = i;
				break;
			}
		}
		if (flag == -1) {
			cout << "The user " << s << " doesn't exist." << endl;
		}
		else {
			U = usrvec[flag];
			cout << U->getArea() << endl;
		}
	}
	friend istream& operator >> (istream& in, UserList& usr) {
		int N;
		in >> N;
		for (int i = 0; i < N; i++) {// N 个用户
			string name;
			int M;
			in >> name >> M;
			usr.U = new User(name);
			for (int j = 0; j < M; j++) {
				int cmd;
				in >> cmd;
				if (cmd & 1) {
					double a, b;
					in >> a >> b;
					usr.S = new Rectangle(a, b);
				}
				else {
					double a;
					in >> a;
					usr.S = new Circle(a);
				}// 用户输入数据初始化完毕
				usr.U->shapevec.push_back(usr.S);// 用户自定义图形压入失败->成功
			}
			usr.usrvec.push_back(usr.U);// 尝试压入用户类型@成功
		}
		return in;
	}

	// Loading-Waitting
	friend ostream& operator << (ostream& out, UserList usr) {
		// out << "Loading Writting--- --- --- --- --- --- --- ---" << endl;
		unsigned int l = usr.GetSize();// 用户表列长度
		// cout << l << " IS L " << endl;
		vector<User*> V = usr.usrvec;// 用户列表
		for (unsigned int i = 0; i < l; i++) {
			User* P = V[i]; // 取出某一个用户
			string name = P->name;// 获取用户姓名
			cout << name << " : ";
			vector<Shape*> T = P->shapevec;// 取出用户定义图形列表
			unsigned int ll = T.size();
			for (unsigned int k = 0; k < ll; k++) {
				Shape* SP = T[k];// 某一个图形
				//按类型调用函数@BUG:单值输出->修复
				if (k) {
					cout << ",";
					SP->prnt();
				}
				else{
					SP->prnt();
				}
			}
			cout << endl;
		}
		return out;
	}
};

// 所有静态变量初始化开始
int Shape::cntOfShapes = 0;
int Rectangle::cntOfRects = 0;
int Circle::cntOfCircles = 0;
int User::cntOfUsers = 0;

int main()
{
    cout<<"In beginning, "<<User::getCntOfUsers()<<" users,";
    cout<<Shape::getCntOfShapes()<<" shapes."<<endl;
    User tmp("C++");
    tmp.addAShape(1, 1, 2);
    tmp.addAShape(2, 3);
    cout<<tmp.getArea()<<endl;

    UserList lst;
    string s1;
    cin>>lst;
    cout<<"Now, "<<User::getCntOfUsers()<<" users,";
    cout<<Shape::getCntOfShapes()<<" shapes, including ";
    cout<<Circle::getCntOfCircles()<<" circles, and ";
    cout<<Rectangle::getCntOfRects()<<" rectangles."<<endl;
    cout<<lst;
    while(cin>>s1)
    {
        lst.showTotalArea(s1);
    }
    return 0;
}

/**************************************************************
	Problem: 2103
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1284 kb
****************************************************************/

