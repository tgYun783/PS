#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(true)
	{
		getline(cin,s);
		if(cin.eof())
			break;
		cout << s << '\n';
	}
}