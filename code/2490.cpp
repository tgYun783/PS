#include <iostream>
using namespace std;

int main()
{
	int count_0;
	int array[4];
	for(int j=0; j<3; j++)
	{
		count_0 = 0;
		for(int i=0; i<4; i++){
			cin >> array[i];
			if(array[i] == 0)
				count_0 ++;
		}
		switch(count_0){
			case 0:
				cout << "E\n";
				break;
			case 1:
				cout << "A\n";
				break;
			case 2:
				cout << "B\n";
				break;
			case 3:
				cout << "C\n";
				break;
			default:
				cout << "D\n";
				break;
			}
	}
}
