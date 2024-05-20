#include <iostream>
#include <algorithm>
using namespace std;
class dot
{
    int x, y;

public:
    void setValue(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }
    bool operator<(const dot &d) const
    {
        if (y != d.y)
            return y < d.y;
        else
            return x < d.x;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    cin >> n;
    dot *arr = new dot[n];

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i].setValue(x, y);
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].getX() << ' ' << arr[i].getY() << '\n';
    }
    delete[] arr;
}