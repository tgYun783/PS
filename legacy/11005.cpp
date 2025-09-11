#include <iostream>
#include <string>
#include <cmath>
using namespace std;






int main()
{
	int n,b;
	int temp;
	string s;
	cin >> n >> b;

	while(n>0)
	{
		temp = n % b;

		if(temp < 10)
			s += (char)temp + '0';
		else
			s += (char)temp + '7';
		n /= b;
	}
	for(int i = s.length()-1; i>=0; i--)
	{
		cout << s[i];
	}
}