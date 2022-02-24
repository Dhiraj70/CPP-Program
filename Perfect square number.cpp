#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int num,number;
	
	cout<< " Enter a number : ";
	cin>>num;
	
	number = sqrt(num);
	
	if(number * number == num)
	{
		cout<<"\nYes,its perfect square";
	}
	else
	{
		cout<<"\nNo,its not perfect square";
	}
	
	return 0;	
}
