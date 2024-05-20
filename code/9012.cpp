#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    BOJ;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            st.push(s[i]);
        int countL = 0, countR = 0;
        bool fin = 0;
        while (!st.empty())
        {
            if (countL > countR)
            {
                cout << "NO" << '\n';
                fin = 1;
                break;
            }
            if (st.top() == ')')
                countR++;
            else
                countL++;
            st.pop();
        }
        if (fin)
            continue;

        if (countL == countR)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}