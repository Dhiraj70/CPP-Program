#include<iostream>
using namespace std;

class check
{
	private:
		
		int i;
		
		public:
			check():i(5){}
			void operator++()
			{
				++i;
			}
			void Display()
			{
				cout<< " i = "<<i<<endl;
	    	}
};

int main()
{
	 check obj;
	 obj.Display();
     ++obj;
	 obj.Display();
	 return 0;
}
