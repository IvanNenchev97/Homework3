#include<iostream>
#include<cstring>
using namespace std;
int CountDigits(int number)
{
	static int counter=0;
	 if(number<10)
	 {
	 	return 1;
	 }
	 else
	 {
	 	counter++;
	 	CountDigits(number/10);
	 }
	 return counter;
	 
}
int main()
{
	int number;
	cout<<"Enter number:";
	cin>>number;
	cout<<CountDigits(number)<<endl;

}
