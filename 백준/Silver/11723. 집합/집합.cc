#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<int> s;
    unordered_set<int> all;
    for (int i=1; i<=20; i++)
        all.insert(i);


    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string str;
        int n;
        cin >> str;
        if (str == "add") {
            cin >> n;
            s.insert(n);
        }
        else if (str == "remove") {
            cin >> n;
            s.erase(n);
        }
        else if (str == "check") {
            cin >> n;
            auto f = s.find(n);
            if (f == s.end()) {
                cout << 0 << '\n';
            }
            else {
                cout << 1 << '\n';
            }
        }
        else if (str == "toggle") {
            cin >> n;
            auto f = s.find(n);
            if (f == s.end()) {
                s.insert(n);
            }
            else {
                s.erase(n);
            }
        }
        else if (str == "all") {
            s = all;

        }
        else if (str == "empty") {
            s.clear();
        }
    }
}
