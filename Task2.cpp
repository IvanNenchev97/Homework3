#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int size=100;
	char str[size];
	cout<<"Enter the string:";
	cin.getline(str,size);
	int i=0,largeletter=0,smallletter=0,digit=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			largeletter++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			smallletter++;
		}
		else if(str[i]>='1'&& str[i]<='9')
		{
			digit++;
		}
		i++;
	}
	cout<<"Number of large letters in the string is:"<<" "<<largeletter<<endl;
	cout<<"Number of small letters in the string is:"<<" "<<smallletter<<endl;
	cout<<"Number of digits in the string is:"<<" "<<digit<<endl;

}

