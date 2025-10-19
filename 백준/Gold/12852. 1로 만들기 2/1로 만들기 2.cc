#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector<pair<int,string>> v(n+1);
    v[1] = {0,"1"};

    for (int i = 2; i <= n; i += 1) {
        int count;
        string s;
        if (i % 2 == 0 && i % 3 == 0) {
            count = min({v[i-1].first, v[i/2].first, v[i/3].first});

            if (count == v[i/3].first) {
                s = v[i/3].second;
            }
            else if (count == v[i/2].first) {
                s = v[i/2].second;
            }
            else {
                s = v[i-1].second;
            }
        }
        else if (i % 2 == 0) {
            count = min(v[i-1].first, v[i/2].first);
            s = (v[i-1].first < v[i/2].first) ? v[i-1].second : v[i/2].second;
        }

        else if (i % 3 == 0) {
            count = min(v[i-1].first, v[i/3].first);
            s = (v[i-1].first < v[i/3].first) ? v[i-1].second : v[i/3].second;
        }
        else {
            count = v[i-1].first;
            s = v[i-1].second;
        }
        v[i].first = count+1;
        s = to_string(i) + " " + s;
        v[i].second = s;

    }
    cout << v[n].first << '\n';
    cout << v[n].second << '\n';



}