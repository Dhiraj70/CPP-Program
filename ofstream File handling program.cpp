#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream newFile("C:\\Users\\Dhiraj Kumar\\cpp.txt");
	
	cout<<"File created...!";
	
	newFile<<"CPP Full course...!";
	newFile.close();
	
	return 0;
}
