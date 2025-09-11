#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>V;
vector<int>op(4);
int Min = INT_MAX;
int Max = INT_MIN;

void bt(int k, int a, vector<int>::iterator it)
{
  if(k == n-1)
  {
    Min = min(a,Min);
    Max = max(a,Max);
  }

  for(int i=0; i<4; i++)
  {
    if(op[i] > 0)
    {
      op[i]--;
      switch(i)
      {
        case 0:
        bt(k+1,a+(*it),it+1);
        break;

        case 1:
        bt(k+1,a-(*it),it+1);
        break;

        case 2:
        bt(k+1,a*(*it),it+1);
        break;

        case 3:
        bt(k+1,(int)(a/(*it)),it+1);
        break;

      }
      op[i]++;
      return;

    }
  }
}
int main()
{
  cin >> n;
  V = vector<int>(n);
  for(int i=0; i<n; i++)
    cin >> V[i];
  for(int i=0; i<4; i++)
    cin >> op[i];

  bt(0,V[0],V.begin()+1);

  cout << Max << '\n' << Min;
}  