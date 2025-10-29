#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000;
ll n;
vector<vector<ll>> multiply(const vector<vector<ll>> &A, const vector<vector<ll>> &B)
{
  vector<vector<ll>> C(2, vector<ll>(2));

  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      for (int k = 0; k < 2; k++)
      {
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
      }
  return C;
}

vector<vector<ll>> power(const vector<vector<ll>> &M, ll exp)
{
  vector<vector<ll>> result(2, vector<ll>(2));
  result[0][0] = result[1][1] = 1;
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
  cin >> n;
  vector<vector<ll>> matrix(2, vector<ll>(2));
  matrix[0][0] = matrix[0][1] = matrix[1][0] = 1;
  auto r = power(matrix, n - 1);
  cout << r[0][0];
}