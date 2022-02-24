#include<iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout<< " Enter a postive integers : ";
	cin>>n;
	
	cout<<"\nFactors of "<< n <<" = ";
	
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		
		cout<<i<<" ";
	}
	return 0;
}
