//다음 코드의 오류를 수정해
#include <iostream>

using namespace std;

void set_ball(int *p ,int i, int j, int k)
{
	for(int z= i-1; z<j; z++)
	{
		p[z] = k;
	}

	
}
int main()
{
	
	
	int n,m;
	cin >> n >> m;
	int array[n]{0,};
	int *p= array;
	for( int count=0; count<m; count++)
	{
		int i,j,k;
		cin >> i >> j >> k;
		set_ball(p,i,j,k);
	}
	for (int count=0; count< n; count++)
	{
		cout << p[count] << ' ';
	}
	cout << endl;
}