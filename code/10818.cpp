#include <iostream>

using namespace std;

int main()
{
	int n,min,max;
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	min = max = array[0];
	for(int i=1; i<n; i++)
	{
		if(array[i] < min)
			min = array[i];
		else if(array[i] > max)
			max = array[i];
	}
	cout << min << ' ' << max << endl;
}