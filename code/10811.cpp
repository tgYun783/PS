#include <iostream>
using namespace std;


void array_out(int *array, int n)
{
	for (int i=0; i<n; i++)
	{
		cout << array[i] <<' ';
	}
}

void fill_array(int *Array, int n)
{
	for(int i=0; i<n; i++)
	{
		Array[i] = i+1;
	}
}
void reverse_array(int *Array, int i, int j)
{
	int temp;
	for(int n=0; n<(j-i+1)/2; n++)
	{
		temp = Array[i-1+n];
		Array[i-1+n] = Array[j-n-1];
		Array[j-n-1] = temp;
	}
}
int main()
{
	int n, m, i, j;
	cin >> n >> m;
	int *Array = new int[n];
	fill_array(Array,n);

	for(int time=0; time<m; time++)
	{
		cin >> i >> j;
		reverse_array(Array,i,j);
	}
	array_out(Array,n);
	cout << endl;
}