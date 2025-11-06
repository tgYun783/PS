#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  
  int D, K;
  cin >> D >> K;
  vector<int> fibo(D);
  fibo[2] = 1;
  fibo[1] = 1;
  for(int i = 3; i<= D-1; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  int A, B = 0;
  for(int a_try = 1; ; a_try++) {
    int left = K - (a_try * fibo[D-2]);
    if(left > 0 && left % fibo[D-1] == 0) {
      int b_try = left / fibo[D-1];
      if(a_try <= b_try) {
        A = a_try;
        B = b_try;
        break;
      }
    }

  }
  cout << A << '\n';
  cout << B << '\n';

  return 0;
}