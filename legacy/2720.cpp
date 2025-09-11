#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int test, change;
	cin >> test;
	for(int i=0; i<test; i++)
	{
		cin >> change;
		
		cout << change / 25 << ' ' << change % 25 / 10 << ' ' << change % 25 % 10 /5 << ' ' << change % 5;
		cout << '\n';
		
	}
}