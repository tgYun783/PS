#include <iostream>
#include <string>
using namespace std;

int main()
{
	//대문자 65~90, 소문자 97~ 122

	int count[26]{0,};
	string input;
	cin >> input;
	for(int i=0; i<input.length(); i++)
	{
		if(input[i]<97)
			count[input[i]-65]++;
		else
			count[input[i]-97]++;
	}
	char max_alphabet;
	int max_count=0,cnt=0;
	for(int i=0; i<26; i++)
	{
		if(max_count < count[i])
		{
			max_count = count[i];
			max_alphabet = i+65;
		}
	}
	for(int i=0; i<26; i++)
	{
		if(max_count == count[i])
			cnt ++;
	}
	if(cnt>1)
		cout << "?";
	else
		cout << max_alphabet;
	
}