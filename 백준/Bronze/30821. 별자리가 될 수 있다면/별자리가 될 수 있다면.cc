#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    
    long long result = n * (n-1) * (n-2) * (n-3) * (n-4) / 120;
    cout << result;
}
