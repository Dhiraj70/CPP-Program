#include<iostream>
using namespace std;

union uni
{
	int marks;
	float avg;
	double salary;    // double 8 bytes
};

int main()
{
	union uni u;
	cout<<"Union size = " << sizeof(u);
	return 0;
}
