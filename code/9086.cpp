#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int i,j;
	cin >> j;
	for(int count=0; count<j; count++)
	{
	cin >> n;
	i = n.length();
	cout << n[0] << n[i-1] << '\n';
	}
}