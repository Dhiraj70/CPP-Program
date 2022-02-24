#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter user choice nunber: ";
	cin>>ch;
	switch(ch)
	{
		case 0:cout<<"sounday";
		break;
			case 1:cout<<"Monday";
			break;
				case 2:cout<<"Tuesday";
				break;
				case 3:cout<<"Wednesday";
				break;
				case 4:cout<<"Thrusday";
				break;
				case 5:cout<<"Friday";
				break;
				case 6:cout<<"Saturday";
				break;
				default:cout<<"Invailed choice";	
	}
	return 0;
}
