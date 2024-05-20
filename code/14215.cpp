#include <iostream>
using namespace std;

int main()
{
    int array[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    while (1)
    {
        if (array[0] + array[1] > array[2])
            break;
        else
        {
            array[2]--;
        }
    }
    cout << array[0] + array[1] + array[2];
}