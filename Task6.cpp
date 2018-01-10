#include<iostream>
using namespace std;
int PrintBinary(int number)
{
	if(number!=0)
	{
		return number%2 + 10*PrintBinary(number/2);
	}
}
int main()
{
	int number;
	cout<<"Enter number:";
	cin>>number;
	cout<<PrintBinary(number);
}
	
