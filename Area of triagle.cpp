#include<iostream>
using namespace std;

class math
{
	public:
		float base,height;
	    float area;	
	    
	    void input()
	    {
	    	cout<< " Enter base of tringle : ";
	    	cin>>base;
	    	
	    	cout<< " Enter height of tringle : ";
	    	cin>>height;
		}
		void add()
		{
			area = 0.5 * (base * height);
		}
		void show()
		{
			cout<< " Area of tringle = "<<area;
		}
};

int main()
{
	math obj;
	obj.input();
	obj.add();
	obj.show();
	return 0;
}
