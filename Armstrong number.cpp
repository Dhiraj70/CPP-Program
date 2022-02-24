#include<iostream>
using namespace std;

int main()
{
	int num,originalNum,remainder,result = 0;
	
	cout<< " Enter three digit integer : ";
	cin>>num;
	
	originalNum = num;
	
	while(originalNum != 0)
	{
		remainder = originalNum % 10;
		
		result += remainder * remainder * remainder ;
		
		originalNum = originalNum / 10 ;
	}
	if(result == num)
	cout<<num<<"is Armstrong number.";
	else
	cout<<num<<" is not Armstong number.";
	
	return 0;
}
