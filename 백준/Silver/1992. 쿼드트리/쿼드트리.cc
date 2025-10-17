#include<bits/stdc++.h>
using namespace std;
string ans = "";
vector<vector<char>> v;
void sol(int size, int row, int col)
{
    int half = size/2;
    bool flag = false;
    char t = v[row][col];
    for(int r = row; r < row + size; r++)
    {
        for(int c = col; c < col + size; c++)
            if(t != v[r][c])
            {
                flag = true;
                break;
            }

        if(flag)
            break;
    }
    if(flag)
    {
        ans += '(';
        sol(half, row,        col);
        sol(half, row,        col + half);
        sol(half, row + half, col);
        sol(half, row + half, col + half);
        ans += ')';
        return;
    }
    else
    {
        ans += t;
        return;
    }
}
int main()
{
    int n;
    cin >> n;
    v = vector<vector<char>>(n,vector<char>(n));

    for(int row=0; row < n; row++)
        for(int col=0; col < n; col++)
            cin >> v[row][col];

    sol(n,0,0);
    cout << ans;
}