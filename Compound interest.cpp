#include<iostream>
#include<cmath>
using namespace std;

class math
{
	public:
		float PA,R,Time,Ci;
		void input()
		{
			cout << " Enter principle amount = ";
			cin>>PA;
			cout << " Enter rate = ";
			cin>>R;
			cout << " Enter time(in year) = ";
			cin>>Time;
			cout<<endl;
		}
		void add()
		{
			Ci = PA*pow((1+R/100),Time)-PA;
		}
		void show() 
		{
			cout << " Compound interest = "<<Ci;
			cout<<endl;
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
