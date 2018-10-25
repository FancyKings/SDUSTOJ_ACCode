#include <bits/stdc++.h>

using namespace std;

const int maxn = 100 + 5;

class Vector
{
public:
	int x, y, z;
public:
	Vector( int a = 0, int b = 0, int c = 0 ) : x( a ), y( b ), z( c )
	{};
	Vector & operator +( const Vector & a)
	{
		Vector ans;
		ans.x	= a.x + x;
		ans.y	= a.y + y;
		ans.z	= a.z + z;
		return(ans);
	}


	Vector & operator -( const Vector & a)
	{
		Vector ans;
		ans.x	= x - a.x;
		ans.y	= y - a.y;
		ans.z	= z - a.z;
		return(ans);
	}


	Vector & operator *( const Vector & a )
	{
		Vector ans;
		ans.x	= y * a.z - z * a.y;
		ans.y	= z * a.x - x * a.z;
		ans.z	= x * a.y - y * a.x;
		return(ans);
	}


	Vector & operator *( int a )
	{
		Vector ans;
		ans.x	= x * 1.0 * a;
		ans.y	= y * 1.0 * a;
		ans.z	= z * 1.0 * a;
		return(ans);
	}


	friend istream & operator >>( istream & in ,Vector& a)
	{
		in >> a.x >> a.y >> a.z;
		return(in);
	}


	friend ostream & operator <<( ostream & os, const Vector & a )
	{
		if ( a.x && a.y < 0 && a.z > 0 )
			os << a.x << "i" << a.y << "j+" << a.z << "k";
		else if ( a.y > 0 && a.z < 0 )
			os << a.x << "i+" << a.y << "j" << a.z << "k";
		else if ( a.y < 0 && a.z < 0 )
			os << a.x << "i" << a.y << "j" << a.z << "k";
		else if ( a.y == 0 && a.x && a.z < 0 )
			os << a.x << "i" << a.z << "k";
		else if ( a.x && a.y && a.z )
			os << a.x << "i+" << a.y << "j+" << a.z << "k";
		else if ( !a.x && a.y && a.z )
			os << a.y << "j+" << a.z << "k";
		else if ( a.x && !a.y && a.z )
			os << a.x << "i+" << a.z << "k";
		else if ( a.x && a.y && !a.z )
			os << a.x << "i+" << a.y << "j";
		else if ( !a.x && !a.y && a.z )
			os << a.z << "k";
		else if ( !a.x && a.y && !a.z )
			os << a.y << "j";
		else if ( a.x && !a.y && !a.z )
			os << a.x << "i";
		else
			os << "0";
		return(os);
	}
};

int main()
{
    Vector vec1, vec2, vec3;
    int cases, n;
    cin>>cases;
    cout<<"vect+vec2\tn*vec1\tvec1*vec2\n";
    for (int i = 0; i < cases; i++)
    {
        cin>>vec1>>vec2>>n;
        vec3 = vec1 + vec2;
        cout<<vec3<<"\t";
        vec3 = vec1 * n;
        cout<<vec3<<"\t";
        vec3 = vec1 * vec2;
        cout<<vec3<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1787
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

