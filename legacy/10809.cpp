#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int count;
	for(int alphabet=97; alphabet < 123; alphabet++)
	{
		count = -1;
		
		for(int i=0; i<len; i++)
		{
			int temp = (int)s[i];
			
			if(temp == alphabet)
			{
				count = i;
				break;
			}
			
		}
		cout << count << ' ';
	}
}