#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<char> stack;
    char tmp;
    string s;
    while (1)
    {
        stack.clear();
        getline(cin, s);
        if (s[0] == '.')
            break;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                if (stack.empty())
                    cout << "yes\n";
                else
                    cout << "no\n";
                break;
            }

            if (s[i] == '(' || s[i] == '[')
                stack.push_back(s[i]);
            else if (s[i] == ')')
            {
                if (!stack.empty() && stack.back() == '(')
                    stack.pop_back();
                else
                {
                    cout << "no\n";
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (!stack.empty() && stack.back() == '[')
                    stack.pop_back();
                else
                {
                    cout << "no\n";
                    break;
                }
            }
        }
    }
}