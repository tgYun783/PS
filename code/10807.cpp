#include <iostream>
using namespace std;

int main()
{
	
	int n, v,count;
	cin >> n;
	int nArray[n+1];
	for (int i=0; i<n; i++)
	{
		cin >> nArray[i];

	}
	cin>> v;
	for (int i=0; i<n; i++)
	{
		if(v==nArray[i])
			count ++;

	}
	cout<< count<< endl;
}