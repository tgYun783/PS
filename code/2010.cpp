#include <iostream>
using namespace std;
unsigned long long total_plug = 1;
class multi_tap
{
public:

    int plus_plug;
    multi_tap();
    multi_tap(int num_plug);

};
multi_tap :: multi_tap() : multi_tap(1){}
multi_tap :: multi_tap(int plug)
{
    plus_plug = plug;
    total_plug += plus_plug - 1;
}

int main()
{
    int amount ;
    cin >> amount;
    for (int i=0;i<amount; i++)
    {
        int *plug= new int;
        cin >> *plug;

        multi_tap multi(*plug);
        delete plug;
    }
    cout << total_plug << endl;
}