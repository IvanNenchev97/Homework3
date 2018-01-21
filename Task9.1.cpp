#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	const int size=100;
	char str[size];
	int arr[size];
	cout<<"Enter the string:";
	cin.getline(str,size);
	int i,result;
	for(i=0;i<255;i++)
	{
		arr[i]=0;
	}
	i=0;
	while(str[i]!='\0')
	{
		result=(int)str[i];
		arr[result]+=1;
		i++;
	}
	for(i=0;i<255;i++)
	{
		if(arr[i]!=0)
		{
			cout<<"Character"<<" "<<i<<" "<<"appears"<<" "<<arr[i]<<" "<<"times"<<endl;
		}
	}
}
