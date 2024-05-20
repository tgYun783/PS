#include <iostream>

using namespace std;

int main()
{
	int array[9]{0,};
	int max, count;
	for(int i=0; i<9; i++)
	{
		cin >> array[i];
	}
	max= array[0];
	count = 1;
	for(int i=1; i<9; i++)
	{
		if(max < array[i])
		{
			max= array[i];
			count = i+ 1;
		}
	}
	cout << max <<endl;
	cout << count << endl;
}