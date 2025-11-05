#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
const int MAX = 100000;

int main()
{
 int n, k;
 cin >> n >> k;

 priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
 pq.push({0,n});
 vector<bool> visited(100001,false);

 while(!pq.empty()) {
  auto [time, num] = pq.top();
  pq.pop();
  if(num == k) {
    cout << time;
    return 0;
  }
  int numV[3];
  numV[0] = num + 1;
  numV[1] = num - 1;
  numV[2] = num * 2;

  if(numV[2] <= MAX && !visited[numV[2]]) {
    pq.push({time,numV[2]});
    visited[numV[2]] = true;
  }
  if(numV[0] <= MAX && !visited[numV[0]]) {
    pq.push({time + 1, numV[0]});
    visited[numV[0]] = true;
  }
  if(numV[1] >= 0 && !visited[numV[1]]) {
    pq.push({time + 1, numV[1]});
    visited[numV[1]] = true;
  }

 }




}