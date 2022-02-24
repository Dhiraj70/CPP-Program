#include<iostream>
using namespace std;
class math
{
	public:
		int add(int a , int b)
		{
			return a + b;
		}
		int add(int a , int b , int c)
		{
			return a + b + c;
		}
};
int main()
{
	math obj;
	cout << obj.add(10, 20) << endl;
	cout << obj.add(10, 20, 30) << endl;
	return 0;
}


