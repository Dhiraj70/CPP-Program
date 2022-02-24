#include<iostream>
using namespace std;

int main()
{
	int i,n;
	
	float sum = 0.0 , average;
	
	cout<< " Enter a number : ";
	
	cin>>n;
	
	float number[n];
	
	for(i = 0 ; i < n ; i++)
	{
		cout<< 1 + i << " Enter number : ";
		
		cin>>number[i];
		
		sum += number[i];
	}
	
	cout<< endl << " sum " << sum;
	
	average = sum / n;
	
	cout<< endl << " Average = "<< average;
	
	return 0;
}
