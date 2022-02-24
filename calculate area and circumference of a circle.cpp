#include<iostream>
using namespace std;
#define pi 3.14
#define two 2.0

class math
{
	public:
		
		float area,circumference,radius;
		
		void input()
		{
			cout<< " Enter a radius of circle in meter : ";
			cin>>radius;
		}
		void add()
		{
			area = 3.14 * radius * radius;
			
			circumference = 2 * pi * radius;
		}
		void show()
		{
			cout<< " \ncircumference = " << circumference << " meter ";
			cout<< " \ncircle area = " << area << " squre meter " << endl;
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
