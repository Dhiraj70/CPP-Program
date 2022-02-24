#include<iostream>
using namespace std;

struct stu
{
	int roll;
	char name[50];
	float marks;
};

int main()
{
	struct stu s;
	cout << "Enter Student Roll Number : ";
	cin >> s.roll;
	cout << "Enter Student Name : ";
	cin >> s.name;
	cout << "Enter student Marks : ";
	cin >> s.marks;
	
	cout << s.roll << " " << s.name << " " << s.marks;
	
	return 0;
}
