#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b,c;
		public:
			void input()
			{
				cout<<"Enter two number : ";
				cin>>a>>b;
			}
			void add()
			{
				c=a+b;
			}
			void show()
			{
				cout<<"Addition of two number = ";
				cout<<c<<"\n";
			}
};

int main()
{
	sum obj;
	obj.input();
	obj.add();
	obj.show();
	
	return 0;
	
}
