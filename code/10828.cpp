#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Stack
{
    vector<int> v;

public:
    void push(int n);
    void pop();
    void size();
    void empty();
    void top();
};

void Stack::push(int n)
{
    v.push_back(n);
}
void Stack::pop()
{
    if (v.size() != 0)
    {
        cout << v.back() << '\n';
        v.pop_back();
    }
    else
        cout << -1 << '\n';
}
void Stack::size()
{
    cout << v.size() << '\n';
}
void Stack::empty()
{
    if (v.size() == 0)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}
void Stack::top()
{
    if (v.size() != 0)
    {
        cout << v.back() << '\n';
    }
    else
        cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Stack v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int j;
        cin >> s;
        if (s == "push")
        {
            cin >> j;
            v.push(j);
        }
        else if (s == "pop")
        {
            v.pop();
        }
        else if (s == "size")
        {
            v.size();
        }
        else if (s == "empty")
        {
            v.empty();
        }
        else if (s == "top")
        {
            v.top();
        }
    }
}
