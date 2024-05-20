#include <iostream>
using namespace std;

int main()
{
	int test;
	int w, h, n;
	cin >> test;
	while(test --)
	{
		cin >> h >> w >> n;
		int floor=0, room=1;
		for(int i=0; i<n; i++)
		{
			floor ++;
			if(floor > h)
			{
				room ++;
				floor=1;
			}
			
		}
		if(room < 10)
			cout << floor <<'0'<< room << '\n';
		else
			cout << floor << room << '\n';
	}
}