#include<iostream>
using namespace std;

class student
{
	public:
		
		int id;
		
		string name;
};

int main()
{
	student obj;
	
	obj.id = 201;
	
	obj.name = "Dhiraj kumar";
	
	cout<<obj.id<<endl;
	
	cout<<obj.name<<endl;
	
	return 0;
}
