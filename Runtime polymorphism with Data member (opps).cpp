#include<iostream>
using namespace std;
class A
{
	public:
		string colour = "Black";
};
class B : public A
{
	public:
		string colour = "Blue";
};
int main()
{
    A obj = B();
    cout << obj.colour;
    return 0;
}
