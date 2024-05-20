#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	int a;
	int n[30]{0,};
	
	
	for(int j=0; j<28; j++)
	{
		cin >> a;
		n[a-1] = 1;
	}
	for(int i=0; i<30; i++)
	{
		if(n[i] == 0)
		{
			cout << i+1<<endl;
		}
	}
}