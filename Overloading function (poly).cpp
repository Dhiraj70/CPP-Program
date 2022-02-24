#include<iostream>
#include<string>
using namespace std;
class Animal
{
	public:
		void animalsound()
		{
			cout << " The animal make a sound " << endl;
		}
};
class Pig : public Animal
{
	public:
		void animalsound()
		{
		  cout << " The pig says : wee wee " << endl;
    	}
};
class Dog : public Animal
{
	public:
		void animalsound()
		{
			cout << " The dog says : bow bow " << endl;
		}	
};
int main()
{
	Animal myanimal;
	Pig mypig;
	Dog mydog;
	
	myanimal.animalsound();
	mypig.animalsound();
	mydog.animalsound();
}
