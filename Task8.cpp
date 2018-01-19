#include<iostream>
#include<cmath>
#include<cstring>
int StringLength(char *str)
{
	static int len=0;
	if(*str!=NULL)
	{
		len++;
		StringLength(str+1);
	}
	return len;
}
using namespace std;
int main()
{
	const int size=100;
	char str[size];
	cout<<"Enter the string:";
	cin.getline(str,size);
	cout<<StringLength(str);
	
}
