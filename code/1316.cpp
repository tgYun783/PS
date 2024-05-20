#include <iostream>
#include <string>
using namespace std;
bool group_checker(string &s)
{
	int len = s.length();
	char cmprt;
	
	for(int i=0; i<len; i++)
	{
		cmprt = s[i];
		for(int j=i+1; j<len; j++)
		{
			if(cmprt == s[j])
				continue;
			else
			{
				for(int f=j+1; f<len; f++)
				{
					if(cmprt == s[f])
						return false;
				}
			}
		}
	}
	return true;
}

int main()
{
	string s;
	int count=0,test;

	cin >> test;
	for(int z=0; z<test; z++)
	{
		cin >> s;
		if(group_checker(s))
			count ++;
	}
	cout << count;
	
}