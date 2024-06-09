#include <iostream>
#include <algorithm>
using namespace std;
enum
{
    red,
    green,
    blue
};
int main()
{
    int minimum_rgb[3];
    int n;
    cin >> n;

    cin >> minimum_rgb[red] >> minimum_rgb[green] >> minimum_rgb[blue];

    for (int i = 1; i < n; i++)
    {
        int rgb[3];
        cin >> rgb[red] >> rgb[green] >> rgb[blue];
        rgb[red] += min(minimum_rgb[green], minimum_rgb[blue]);
        rgb[green] += min(minimum_rgb[red], minimum_rgb[blue]);
        rgb[blue] += min(minimum_rgb[red], minimum_rgb[green]);
        copy(begin(rgb), end(rgb), begin(minimum_rgb));
    }
    cout << min({minimum_rgb[red], minimum_rgb[green], minimum_rgb[blue]});
}