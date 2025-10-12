#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int ansRow,ansCol;
void matrix(int n, int row, int col) {
    if (n == 0)
        return;
    
    int s = (1 << (n-1));
    
    if (ansRow < row + s && ansCol < col + s) {
        matrix(n-1, row, col);
    }
    
    if (ansRow < row + s && ansCol >= col + s) {
        cnt += s*s;
        matrix(n-1, row, col + s);
    }
    
    if (ansRow >= row + s && ansCol < col + s) {
        cnt += 2 * s*s;
        matrix(n-1, row + s, col);
    }
    
    if (ansRow >= row + s && ansCol >= col + s) {
        cnt += 3 * s*s;
        matrix(n-1, row + s, col + s);
    }
    
    // matrix(n-1, row, col);
    // matrix(n-1, row, col + pow(2,n)/2);
    // matrix(n-1, row + pow(2,n)/2, col);
    // matrix(n-1, row + pow(2,n)/2, col + pow(2,n)/2);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n >> ansRow >> ansCol;
    matrix(n, 0,0);
    cout << cnt;

}