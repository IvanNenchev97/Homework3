#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int FindLength(char* str,char* str1)
{
	int len=strlen(str);
	int len1=strlen(str1);
	if(len>len1)
	{
		return len;
	}
	else if(len<len1)
	{
		return len1;
	}
}
int main()
{
	const int size=100;
	char str[size];
	char str1[size];
	char str2[size];
	cout<<"Enter the first string:";
	cin.getline(str,size);
	cout<<"Enter the second string:";
	cin.getline(str1,size);
	int i=0;
	while(i<=4)
	{
		str2[i]=str[i];
		str[i]=str1[i];
		str1[i]=str2[i];
		
		i++;
	}
	cout<<FindLength(str,str1);
	cout<<endl;
	int result=strcmp(str,str1);
	if(result==1)
	{
		cout<<str1<<endl;
	}
	else if(result==-1)
	{
		cout<<str<<endl;
	}
	
	
	
	
	

}
