#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	const int size=100;
	char str[size];
	int arr[size];
	cout<<"Enter the string:";
	cin.getline(str,size);
	int i,len;
	len=strlen(str);
	for(i=0;i<26;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			arr[str[i]-97]++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			arr[str[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			cout<<"Character"<<" "<<(char)(i+97)<<" "<<"appears"<<" "<<arr[i]<<" "<<"times"<<endl;
		}
	}
	
	

}

