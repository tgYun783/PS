#include <iostream>
#include <string>
using namespace std;

int main()
{
	int chess[6]{1, 1, 2, 2, 2, 8};
	int temp;
	for(int i=0; i<6; i++)
	{
		cin >> temp;
		chess[i] -= temp;	
	}
	for(int i=0; i<6; i++)
	{
		cout << chess[i] << ' ';
	}
}