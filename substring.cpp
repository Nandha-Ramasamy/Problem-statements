#include<iostream>
using namespace std;
#include<string>
#include<cstring>

int main()
{
	char in1[100];
	cin>>in1;
	char in2[100];
	cin>>in2;
	int j;
	int flag=0;
	for (int i=0;i<strlen(in1);i++)
	{
		for ( j=0;j<strlen(in2);j++)
		{
			if(in1[i+j]!=in2[j])
			{
				break;
			}
		}
		if(j==strlen(in2))
		{
			flag+=1;
			cout<<"match found";
		}
    }
		if(flag==0)
		{
			cout<<"no match found";
		}
	return 0;
}
