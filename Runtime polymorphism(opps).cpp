#include<iostream>
using namespace std;
class Animal
{
	public:
		void eat()
		{
			cout << " Eatng...";
		}
};
class Dog : public Animal
{
	public:
		void eat()
		{
			cout << " Eating bread...";
		}
};

int main()
{
	Dog obj = Dog();
	obj.eat();
	return 0;
}
