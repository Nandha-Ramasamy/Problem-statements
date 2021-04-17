#include<iostream>
using namespace std;
#include<string>
#include<cmath>
#include<cstring>
//int sum(char a)
//{
//	
//}

int main()
{
	char s[100];
	cin>>s;
	for (int i=0;i<strlen(s);i++)
	{
		int j=i;
		if(isalpha(s[i]))
		{
			int a=0;
			if(isdigit(s[i+1]))
			{
				int count=0;
				while(isdigit(s[i+1]))
				{
					
					a=pow(10,count)*a+(s[i+1]-48);
					i+=1;
					count+=1;
				}
				while(a)
				{
					cout<<s[j];
					a-=1;
				}
			}
			
		else{
			cout<<s[i];
			}
		}
		
	}
	return 0;
}
