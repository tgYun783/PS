#include <iostream>
using namespace std;

int main()
{
    string CArray[2001];
    int index = 0;
    CArray[0] = "ChongChong";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        for (int j = 0; j <= index; j++)
        {
            if (s1 == CArray[j])
            {
                bool found = 0;
                for (int k = 0; k <= index; k++)
                {
                    if (s2 == CArray[k])
                        found = 1;
                }
                if (!found)
                    CArray[++index] = s2;
            }
            else if (s2 == CArray[j])
            {
                bool found = 0;
                for (int k = 0; k <= index; k++)
                {
                    if (s1 == CArray[k])
                        found = 1;
                }
                if (!found)
                    CArray[++index] = s1;
            }
        }
    }
    cout << index + 1;
}