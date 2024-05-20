#include <iostream>
using namespace std;
int main()
{
    int n;

    while (1)
    {
        int array[100001];
        int pointer = -1;
        int sum = 0;
        cin >> n;
        if (n == -1)
            break;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                array[++pointer] = i;
                sum += i;
            }
        }

        if (n == sum)
        {
            cout << n << " = ";
            cout << array[0];
            for (int i = 1; i <= pointer; i++)
                cout << " + " << array[i];
            cout << endl;
        }
        else
        {
            cout << n << " is NOT perfect." << endl;
        }
    }
}