#include<iostream>
using namespace std;


int largest_num(int *Array, int n)
{
	int largest = Array[0];
	for(int i=1; i<n; i++)
	{
		if(largest < Array[i])
		{
			largest = Array[i];
		}
	}
	return largest;
}

int main()
{
	int n,largest;
	cin >> n;
	int *Array = new int[n];
	double total = 0.0;

	for(int i=0; i<n; i++)
	{
		
		cin >> Array[i];
	}
	largest = largest_num(Array,n);
	for(int i=0; i<n; i++)
	{
		total += (double)Array[i] / largest * 100.0;
	}
	cout << total/n;

}