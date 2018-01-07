#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	for(int i=0;i<255;i++)
	{
		if(i>='A' && i<='Z')
		{
			cout<<"ASCII Code of character"<<(char)i<<" "<<"is"<<" "<<i<<endl;
		}
	}

}

