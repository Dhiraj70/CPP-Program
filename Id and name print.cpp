#include<iostream>
using namespace std;

class student
{
	public:
		int id;
		string name;
		void input(int i , string n)
		{
			id = i;
			name = n;
		}
		void show()
		{
			cout<<id<<" "<<name<<endl;
		}
};

int main()
{
	student s1;
	
	student s2;
	
	s1.input (201,"sonu");
	
	s2.input(202,"Aman");
	
	s1.show();
	
	s2.show();
	
	return 0;
}
