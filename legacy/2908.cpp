#include <iostream>
#include <string>
using namespace std;

string pallendrom(string str)
{
	int len = str.length();
	char temp;
	for(int i=0; i<len/2; i++)
	{
		temp = str[i];
		str[i] = str[len-1 -i];
		str[len-1-i] = temp;
	}
	return str;
}
int main()
{
	string s1, s2;
	

	cin >> s1 >> s2;
	if(stoi(pallendrom(s1)) >stoi(pallendrom(s2)))
		cout << pallendrom(s1);
	else
		cout << pallendrom(s2);

	
}