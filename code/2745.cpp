#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int turn_to_ten(string n, int b)
{
	int temp,result=0;
	int len = n.length();
	for(int i=0; i<len; i++)
	{
		if(n[len-i-1]<=57)
			temp = n[len-i-1] - '0';
		else
			temp = n[len-i-1] - '7';
		result += temp * pow(b,i);	
	}
	return result;
}




int main()
{
	string n;
	int b;
	cin >> n >> b;
	cout << turn_to_ten(n,b);
}