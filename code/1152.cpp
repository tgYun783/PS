#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count=1;
	getline(cin,s);
	int len= s.length();
	if(s[len-1] == ' ')
			count --;
	for(int i=1; i<len; i++)
	{
		
		if(s[i] == ' ')
			count ++;
	}
	cout << count << endl;
}