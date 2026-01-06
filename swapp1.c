#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Swapping value of a:"<<a <<endl;
	cout<<"Swapping value of b:"<<b <<endl;
}
