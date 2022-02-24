#include<iostream>
using namespace std;

int main()
{
	int num1 , num2;
	
	char op;
	
	cout << "Enter the operator : +, -, *, / : ";
	
	cin>>op;
	
	cout<<"Enter the first number : ";
	
	cin>>num1;
	
	cout<<"Enter the second number : ";
	
	cin>>num2;
	
	switch(op)
	{
		case '+':
			cout<< num1 << " + " << num2 << " = " << num1 + num2;
			break;
				
				case '-':
					cout<< num1 << " - " << num2 << " = " << num1 - num2;
					break;
					
					case '*':
						cout<< num1 << " * " << num2 << " = " << num1 * num2;
						break;
						
						case '/':
							cout<< num1 << " / " << num2 << " = " << num1 / num2;
							break;
							
							default:
								cout<< "Error! operator are not correct";
	}
	return 0;
}
