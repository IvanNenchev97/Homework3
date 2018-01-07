#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int size=100;
	char str[size];
	char ch;
	cout<<"Enter the string:";
	cin.getline(str,size);
	cout<<"Enter the character:";
	cin>>ch;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			cout<<"Character"<<" "<<ch<<" "<<"appears at position"<<" "<<i<<endl;
		}
		i++;
	}

}

