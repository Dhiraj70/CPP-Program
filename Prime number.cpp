#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	bool isprime = true;
	
	cout<<"Enter the postive number : ";
	
	cin>>n;
	
	if(n == 0 || n == 1)
	{
		isprime = false;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n % i == 0)
			{
				isprime = false;
				break;
			}
		}
	}
	if(isprime)
	{
		cout<< "is prime number";
	}
	else
	{
		cout<< "is not prime number";
	}
	return 0;
}
