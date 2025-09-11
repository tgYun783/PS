#include <iostream>

using namespace std;


int main()
{
	int arr[9][9];
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			cin >> arr[i][j];
		}
	}
	int max_value, max_i,max_j;
	max_value = arr[0][0];
	max_i = max_j = 1;
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(arr[i][j]>max_value)
			{
				max_value = arr[i][j];
				max_i = i+1;
				max_j = j+1;
			}
		}

	}
	cout << max_value << '\n' << max_i << ' ' << max_j;


}