#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n[8];
	string s;
	for(int i=0; i<8; i++)
	{
		cin >> n[i];
	}
	if(n[0] == 1)
	{
		s= "ascending";
		for(int i=0; i<7; i++)
		{
			if(n[i]>n[i+1])
			{
				s = "mixed";
				break;
			}
		}
	}
	else if(n[0] == 8)
	{
		for(int i=0; i<7; i++)
		{
			s="descending";
			if(n[i]<n[i+1])
			{
				s = "mixed";
				break;
			}
		}
	}
	else
		s ="mixed";
	cout << s;

	
}