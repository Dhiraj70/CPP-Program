#include<iostream>
using namespace std;

struct stu
{
	int marks;       // int 4 bytes
	float avg;       // float 4 bytes
	double salary;   // double 8 bytes     (4+4+8=16)
};

int main()
{
	struct stu s;
	cout<<"structure size = "<<sizeof(s);
	return 0;
}
