#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char grade[3];
	double credit;
	double total_credit=0.0;
	double total_creditXgrade=0.0;
	for(int i=0; i<20; i++)
	{
		cin >> s >> credit >> grade;
		if(grade[0] == 'P')
			continue;
		total_credit += credit;
		switch(grade[0])
		{
		case 'A':
			if(grade[1]=='+')
				total_creditXgrade += credit*4.5;
			else
				total_creditXgrade += credit*4.0;
			break;
		case 'B':
			if(grade[1]=='+')
				total_creditXgrade += credit*3.5;
			else
				total_creditXgrade += credit*3.0;
			break;	
		case 'C':
			if(grade[1]=='+')
				total_creditXgrade += credit*2.5;
			else
				total_creditXgrade += credit*2.0;
			break;
		case 'D':
			if(grade[1]=='+')
				total_creditXgrade += credit*1.5;
			else
				total_creditXgrade += credit*1.0;
			break;
		default:
			break;
		}
	}
	cout << total_creditXgrade / total_credit;
}