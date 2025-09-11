#include <iostream>
using namespace std;



int main()
{
    int total, total_amount, price, amount;

    cin >> total;
    cin >> total_amount;
    for(int i=0; i<total_amount; i++)
    {
        cin >> price >> amount;
        total -= price*amount;
    }
    if(total == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}