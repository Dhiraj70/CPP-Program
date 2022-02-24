#include<iostream>
using namespace std;
int main()
{
	double number[] = {7,5,6,12,35,27};
	
	double sum = 0; 
	
	double count = 0;
	
	double average;
	
	cout<< " the number are : ";
	
	for(const int &n : numbers)
	{
		cout<< n <<" ";
		
		sum += n;
		
		++count;
	}
	cout<< " \nTheir sum = "<< sum << endl;
	
	average = sum / count;
	
	cout<< " Their average = " << average << endl;
	
	return 0;
}
