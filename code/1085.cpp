#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h, tx, ty;

    cin >> x >> y >> w >> h;

    if ((w - x) >= x)
        tx = x;
    else
        tx = (w - x);
    if ((h - y) >= y)
        ty = y;
    else
        ty = (h - y);

    if (tx > ty)
        cout << ty;
    else
        cout << tx;
}