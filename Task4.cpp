#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int size=100;
	const int size1=5;
	char str[size];
	char str1[size];
	char str2[size1];
	cout<<"Enter the first string:";
	cin.getline(str,size);
	cout<<"Enter the second string:";
	cin.getline(str1,size);
	int len=strlen(str);
	int len1=strlen(str1);
	int i=0;
	while(str[i]<str[size1])
	{
		str2[i]=str[i];
		str[i]=str1[i];
		str1[i]=str2[i];
		i++;
	}
	if(len>len1)
	{
		cout<<len<<endl;
	}
	else if(len1>len)
	{
		cout<<len1<<endl;
	}
	else
	{
		cout<<"The two strings have the same length:"<<" "<<len<<endl;
	}
	cout<<str<<endl;
	cout<<str1<<endl;

}

