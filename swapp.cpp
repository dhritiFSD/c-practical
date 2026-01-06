#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number :";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Swapping value of a :"<<a<<endl;
	cout<<"Swapping value of b :"<<b<<endl;
}
