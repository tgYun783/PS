#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,r1,r2,test;
    float len_turret;

    cin >> test;
    for(int i=0; i<test; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        len_turret = sqrt(pow(((float)x2-x1),2) + pow(((float)y2-y1),2));
        if(len_turret == 0)
        {
            if (r1 == r2)
            {
                cout << -1 << endl;
            }
            else 
                cout << 0 << endl;
        }
        else 
        {
            if(abs(r1 -r2) == len_turret || r1+r2 == len_turret)
                cout << 1 << endl;
            else if (r1 + r2 < len_turret || abs(r1 - r2) > len_turret)
                cout << 0 << endl;
            else
                cout << 2 << endl;
        }
        

    }
    return 0;
}