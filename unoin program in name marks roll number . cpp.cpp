#include<iostream>
using namespace std;

union uni
{
	int roll;
	char name[20];
	float marks;
};

int main()
{
	union uni u;
	
	cout << "Enter Student Roll Number : ";
	cin >> u.roll;
	cout << "roll number is : " << u.roll << endl;
	cout << endl;
	
	cout << "Enter Student Name : ";
	cin >> u.name;
	cout << "Student Name is : " << u.name << endl;
	cout<< endl;
	
	cout << "Enter Student Marks : ";
	cin >> u.marks;
	cout << "Student Marks is : " << u.marks;
	cout << endl;
	
	return 0;
	
}
