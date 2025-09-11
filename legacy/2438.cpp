#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int count = i + 1;
        for (int j=0; j<count; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    
}