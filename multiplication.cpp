#include<iostream>
using namespace std;
class multi
{
	int num1 , num2 , multi;
	public:
		void input()
		{
			cout<<"Enter num1 : ";
			cin>>num1;
			cout<<"Enter num2 : ";
			cin>>num2;
		}
		void mul()
		{
			multi = num1 * num2;
		}
		void show()
		{
			cout<<"mulitplication : " << multi << endl;
		}
};

int main()
{
	multi obj;
	obj.input();
	obj.mul();
	obj.show();
}
