#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,x,t;
	cin >> n >> x;
	vector<int> a;
	vector<int> result;
	for(int i=0; i<n; i++)
	{
		cin >> t;
		a.push_back(t);
	}
	for(int i=0; i<n; i++)
	{
		if(a[i] < x)
		{
			result.push_back(a[i]);
			
		}
	}
	for(int i=0; i<result.size();i++)
	{
		cout << result[i] << ' ';
	}
}