#include <bits/stdc++.h>
using namespace std;

int main()
{
  int floor, dest, start, up, down;
  cin >> floor >> start >> dest >> up >> down;
  queue<pair<int,int>> q;
  q.push({start, 0});
  vector<bool> visited(floor + 1);

  while(!q.empty()) {
    auto now = q.front();
    q.pop();
    if(now.first == dest) {
      cout << now.second;
      return 0;
    }

    int ntou = now.first + up;
    int ntod = now.first - down;
    
    if(ntou <= floor && visited[ntou] == false) {
      visited[ntou] = true;
      q.push({ntou, now.second+1});
    }
    if(ntod > 0 && visited[ntod] == false) {
      visited[ntod] = true;
      q.push({ntod, now.second+1});
    }
  }
  cout << "use the stairs";
}