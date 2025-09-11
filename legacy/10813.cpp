//다음 코드의 오류를 수정해
#include <iostream>


using namespace std;

void change_ball(int *array ,int a, int b)
{
	int temp = array[a-1];
	array[a-1] = array[b-1];
	array[b-1] = temp;
}
void fill_array(int *array, int n)
{
	for(int i=0; i<n; i++)
	{
		array[i] = i+1;
	}
}
int main()
{
	
	
	int n,m;
	cin >> n >> m;
	int *array = new int [n]{0,};
	
	fill_array(array,n);
	for(int count=0; count<m; count++)
	{
		int a,b;
		cin >> a >> b;
		change_ball(array,a,b);
	}
	for(int count=0; count<n; count++)
	{
		cout << array[count] << ' ';
	}
	cout << endl;
}