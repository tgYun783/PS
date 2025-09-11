#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Palindrome
{
    int cnt{0};
    bool recursion(const char *s, int l, int r)
    {
        cnt++;
        if (l >= r)
            return true;
        else if (s[l] != s[r])
            return false;
        else
            return recursion(s, l + 1, r - 1);
    }

public:
    bool isPalindrome(const char *s)
    {
        cnt = 0;
        return recursion(s, 0, strlen(s) - 1);
    }
    int getCnt() const
    {
        return cnt;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    Palindrome p;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;

        cin >> input;
        cout << p.isPalindrome(input.c_str()) << ' ';
        cout << p.getCnt() << '\n';
    }
}