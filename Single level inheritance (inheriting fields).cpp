#include<iostream>
using namespace std;

class Account
{
	public:
		float salary = 60000;
};
class programmer : public Account
{
	public:
		float bonus = 5000;
};

int main()
{
	programmer obj;
	cout << " salary = " << obj.salary << endl;
	cout << " bonus = " << obj.bonus << endl;
	
	return 0;
}
