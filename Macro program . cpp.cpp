#include<iostream>
#define num 10
using namespace std;

int main()
{
	int i , r;
	
	for(i=1;i<=10;i++)
	{
		r = num * i;
		
		cout << num << "*" << i << "=" << r << endl;
	}
	return 0;
}
