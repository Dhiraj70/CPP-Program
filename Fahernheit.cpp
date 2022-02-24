#include<iostream>
using namespace std;

class math
{
	public:
		float Fahrenheit,celsuis;
		void input()
		{
			cout << " Enter the temprature in calsuis = ";
			cin>>celsuis;
			cout<<endl;
		}
		void add()
		{
			Fahrenheit = celsuis * 9/5 +32 ;
		}
		void show()
		{
			cout << " The temprature in Fahrenheit = "<<Fahrenheit<<endl;
		}
};

int main()
{
	math obj;
	obj.input();
	obj.add();
	obj.show();
	return 0;
}
