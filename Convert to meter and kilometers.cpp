#include<iostream>
using namespace std;

class math
{
	public:
		float meter,cmeter,kmeter;
		void input()
		{
			cout << " Enter length in centimeter = ";
			cin>>cmeter;
			cout << endl;
		}
		void add()
		{
			meter = cmeter / 100.0;
			kmeter = cmeter / 100000.0;
		}
		void show()
		{
			cout <<" Length of meter = ";
			
			cout << meter<<endl;
			
			cout << " Length of kmeter = ";
		
			cout << kmeter<<endl;
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
