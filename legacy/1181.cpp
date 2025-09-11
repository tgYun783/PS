#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class word
{
    string s;
    int len;

public:
    void setValue(string s)
    {
        this->s = s;
        this->len = s.size();
    }
    string getString() { return s; }
    bool operator<(const word &other) const
    {
        if (len != other.len)
            return len < other.len;
        else
            return s < other.s;
        }
};
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    unordered_set<string> set;
    int n;
    cin >> n;
    word *arr = new word[n]{};
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (set.find(s) == set.end())
        {
            arr[++idx].setValue(s);
            set.insert(s);
        }
    }
    sort(arr, arr + idx + 1);
    for (int i = 0; i <= idx; i++)
    {
        cout << arr[i].getString() << '\n';
    }
    delete[] arr;
}