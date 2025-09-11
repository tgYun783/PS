#include <iostream>
using namespace std;



int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y, test;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        cin >> x >> y;
        cout << x+y << '\n';
    }

}