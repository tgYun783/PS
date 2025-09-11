#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int trys;
	cin >> trys;
	int dot_on_side = 2;

	for(int i=0; i<trys; i++)
	{
		dot_on_side = 2*dot_on_side - 1;
	}
	int total_dot = dot_on_side * dot_on_side;

	cout << total_dot;
}