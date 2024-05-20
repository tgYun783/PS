#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, temp;
	int sum=0,n, num;
	cin >> n;
	cin >> s;
	for(int i=0; i<n; i++)
	{
		
		temp = s[i];
		sum += stoi(temp);
		
	}
	cout << sum;
}