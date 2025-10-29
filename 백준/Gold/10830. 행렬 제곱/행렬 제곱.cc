#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD = 1000;

ll n, b;
vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{
  vector<vector<ll>> C(n, vector<ll>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      for (int k = 0; k < n; k++)
      {
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
      }

  return C;
}
vector<vector<ll>> power(vector<vector<ll>> M, long long exp)
{
  vector<vector<ll>> result(n, vector<ll>(n));
  for (int i = 0; i < n; i++)
    result[i][i] = 1;
  vector<vector<ll>> base = M;

  while (exp > 0)
  {
    if (exp % 2 == 1)
      result = multiply(result, base);

    base = multiply(base, base);

    exp /= 2;
  }
  return result;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> b;
  vector<vector<ll>> matrix(n, vector<ll>(n));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> matrix[i][j];
  }
  auto r = power(matrix, b);
  for (auto m : r)
  {
    for (auto val : m)
      cout << val << ' ';
    cout << '\n';
  }
}