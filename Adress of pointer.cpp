#include<iostream>
using namespace std;
int main()
{
	int *p;
	
	int a = 10;
	
	p = &a;
	
	cout << &a<<endl;
	
	cout << p << endl;
	
	cout << "a = " << a <<endl;
	
	cout << "p = " << *p;
	
	return 0;
}
