#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		string name;
		float salary;
		void insert(int i , string n , float s)
		{
			id = i;
			name = n;
			salary = s;
		}
		void display()
		{
			cout << id << " " << name << " " << salary << endl;
		}
};

int main()
{
	Employee obj1;
	Employee obj2;
	obj1.insert(101 , "Satya" , 5000);
	obj2.insert(201 , "Suraj" , 8000);
	obj1.display();
	obj2.display();
	
	return 0;
}
