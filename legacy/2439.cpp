#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int count = i + 1;
        int space = n - count;
        for (int j=0; j<count; j++)
        {
            while(space != 0)
            {
                cout << ' ';
                space--;
                
            }
            cout << '*';
        }
        cout << endl;
    }
    
}