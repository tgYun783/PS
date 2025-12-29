#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int>v(26,-1);
    int tos = 0;
    for(auto c : s) {
        int idx = c - 'a';
        if(v[idx] == -1) {
            v[idx] = tos;
        }
        tos++;
    }
    for(auto n : v) 
        cout << n << ' ';
}