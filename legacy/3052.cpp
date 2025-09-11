#include <iostream>
#include <set>

using namespace std;

int main()
{
	int num;
	set<int> S;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		num = num % 42;

		S.insert(num);
	}

	cout << S.size() << endl;

	return 0;
}