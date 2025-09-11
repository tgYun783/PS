#include <iostream>
using namespace std;

void fillArray(int a, int b, int array[100][100])
{
    for (int i = b; i < b + 10; i++)
    {
        for (int j = a; j < a + 10; j++)
        {
            if (j >= 100 || i >= 100)
                continue;
            array[j][i] = 1;
        }
    }
}

int main()
{
    int array[100][100]{
        0,
    };
    int testCase;
    cin >> testCase;
    for (int k = 0; k < testCase; k++)
    {
        int a, b;
        cin >> a >> b;
        fillArray(a, b, array);
    }
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (array[j][i] == 1)
                count++;
        }
    }
    cout << count << endl;
}