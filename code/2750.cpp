//다음 코드의 오류를 수정해
#include <iostream>


using namespace std;

void bubble_algoritm(int *array, int n)
{
	
	int temp;
	int size = n;
	

	for(int i=n -1; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
void array_out(int *array, int n)
{
	for (int i=0; i<n; i++)
	{
		cout << array[i] <<endl;
	}
}

int main()
{
	int n;
	cin >> n;
	int *array = new int[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
		
	}
	bubble_algoritm(array, n);
	array_out(array,n);	
}