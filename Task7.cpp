#include<iostream>
#include<cstring>
using namespace std;
int RaiseToPower(int number,int power)
{
	if(power==0)
	{
		return 1;
	}
	else if(power>0)
	{
		return number*RaiseToPower(number,power-1);
	}
	else
	{
		return 1/RaiseToPower(number,-power);
	}
}
int main()
{
	int number,power;
	cout<<"Enter number:";
	cin>>number;
	cout<<"Enter power to raise the number:";
	cin>>power;
	cout<<RaiseToPower(number,power)<<endl;
	
}

