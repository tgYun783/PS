#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count=0;
	cin >> s;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 's' || s[i] == 'z')
		{
			if(s[i+1] == '=')
				i++;
		}
		else if(s[i] =='l' || s[i] == 'n')
		{
			if(s[i+1] == 'j')
				i++;
		}
		else if(s[i] == 'c')
		{
			if(s[i+1] == '=' || s[i+1] == '-')
				i++;
		}
		else if(s[i] == 'd')
		{
			if(s[i+1] == 'z')
			{
				if(s[i+2] == '=')
					i+=2;
			}
			else if(s[i+1] == '-')
				i++;
		}


		count++;
	}
	cout << count;
}