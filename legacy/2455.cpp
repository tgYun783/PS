#include <iostream>
using namespace std;

int main()
{
	int train_people=0;
	int max_p = 0;
	int in,out;

	for(int i=0; i<4; i++)
	{
		cin >> out >> in;
		train_people -= out;
		train_people += in;
		if(max_p<train_people)
			max_p = train_people;
	}
	cout << max_p;

}
