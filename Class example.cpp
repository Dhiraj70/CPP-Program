#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		void insert(int i , string n)
		{
			id = i;
			name = n;
		}
		void display()
		{
			cout << id << " " << name << endl;
		}
};

int main()
{
	student obj1;
	student obj2;
	obj1.insert(201 , "Nakul");
	obj2.insert(202 , "Rahul");
	obj1.display();
	obj2.display();
	
	return 0;
}
