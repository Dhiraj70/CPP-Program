#include<iostream>
using namespace std;

class math
{
	int a,b;
	public:
		void input()
		{
			cout<< " Input a = ";
			cin>>a;
			cout<< " Input b = ";
			cin>>b;
			cout << endl;
		}
		void add()
		{
			cout<< " (a+b)^2 = "<<((a*a)+(2*a*b)+(b*b));
		}
};

int main()
{
	math obj;
	obj.input();
	obj.add();
	return 0;
}

