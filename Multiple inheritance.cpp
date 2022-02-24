#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void get_a(int n)
			{
				a = n;
			}
};
class B
{
	protected:
		int b;
		public:
			void get_b(int n)
			{
				b = n;
			}
};
class C : public A , public B
{
	public:
		void display()
		{
			std::cout << " The value of a = " << a << endl;
			std::cout << " The value of b = " << b << endl;
            cout << " Addition of a and b = " << a + b;		
		}
};
int main()
{
	C obj;
	obj.get_a(10);
	obj.get_b(20);
	obj.display();
	
	return 0;
}
