#include<iostream>
using namespace std;

int a;             //extern (global)

int main()
{
	int b;           // auto(Local)
	static int c;    // static
	register int d;  //regisster
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	
	return 0;
}
