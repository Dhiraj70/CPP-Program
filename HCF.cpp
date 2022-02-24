#include<iostream>
using namespace std;

int main()
{
	int n1,n2,hcf,dhi;
	
	cout<< " Enter two number : ";
	
	cin>>n1>>n2;
	
	if(n2>n1)
	{
		dhi=n2;
		n2=n1;
		n1=dhi;
	}
	
	for(int i = 1 ; i <= n2 ;i++)
	{
		if(n1 % i == 0 && n2 % i == 0)
		{
		   hcf = 1;
		}
	}
	cout<< "\nHCF = "<<hcf;
	
	return 0;
}
