#include<iostream>
using namespace std;

int fun()
{
	auto int a = 10;
	static int b = 10;
	
	cout << a << endl;
	++a;
	
	cout << b << endl;
	++b;
}

int main()
{
	fun();   // calling
	fun();    //calling
	return 0;
}
