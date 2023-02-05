#include <iostream>

using namespace std;

//function definition
int addition(int a,int b)
{
	return (a+b);
	// int c= a+b;
}

int main()
{
	int num1, num2;

	//read numbers
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	
	//print addition
	cout<<"Addition is: "<<addition(num1,num2)<<endl;
	
	return 0;
}