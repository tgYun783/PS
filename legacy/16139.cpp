#include <iostream>
#include <string>
using namespace std;

string s;
int q;
int wordsum[26][200001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s >> q;
	int z = s.size();
	for(int i=0; i<z; i++)
	{
		if(i)
		{
			for(int j=0; j < 26; j++)
			{
				wordsum[j][i] = wordsum[j][i-1];
			}

		}
		int word = s[i] - 'a';
		wordsum[word][i]++;
	}

	while(q--)
	{
		char word;
		int start, end;
		cin >> word >> start >> end;
		int search = word -'a';
		cout << wordsum[search][end] - wordsum[search][start-1] <<'\n';
	}
}