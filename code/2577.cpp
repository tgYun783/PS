#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, abs=1;
	for(int i=0; i<3; i++)
	{
		cin >> n;
		abs *= n;
	}
	int array[10]{0,};
	string s =  to_string(abs);
	
	for(int i=0; i<s.size(); i++)
	{
		int num = s[i] - '0';
		array[num] ++;
	}
	for(int i=0; i<10; i++)
	{
		cout << array[i] <<'\n';
	}

	
}