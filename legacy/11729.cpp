#include <iostream>
#include <vector>
using namespace std;
int count = 0;
vector<string> q;
void hanoi(int n, string from, string sub, string to)
{
    count++;
    if (n == 1)

        q.push_back(from + " " + to);
    else
    {
        hanoi(n - 1, from, to, sub);

        q.push_back(from + " " + to);
        hanoi(n - 1, sub, from, to);
    }
}

int main()
{
    int n;
    cin >> n;
    hanoi(n, "1", "2", "3");
    cout << count << '\n';
    for (auto it = q.begin(); it != q.end(); it++)
        cout << *it << '\n';
}