#include <iostream>
using namespace std;
int main() {
    int X;
    cin >> X;
    int cnt = 0;
    while (X) {
        cnt += X & 1;
        X >>= 1;
    }
    cout << cnt << '\n';
    return 0;
}
