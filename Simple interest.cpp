#include<iostream>
#include<cmath>
using namespace std;

class math
{
	public:
		float p,r,t,i;
		void input()
		{
			cout<< " Enter princilpe : ";
			cin>>p;
			cout<< " Enter rate : ";
			cin>>r;
			cout<< " Enter time(in year) : ";
			cin>>t;
		}
		void add()
		{
			i=(p*r*t)/100;
		}
		void show()
		{
			cout<< " \nSimple interest = "<<i;
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
