#include<iostream>
using namespace std;

class math
{
	public:
		
		float r,a;
		
		void input()
		{
			cout<< " Enter Radius : ";
			cin>>r;
		}
		void add()
		{
			a=3.14*r*r;
		}
		void show()
		{
			cout<< " Area of circle = "<<a;
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
