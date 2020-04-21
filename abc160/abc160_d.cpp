#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int n;

void bfs(int node,vector<vector<int>> &diff){
  queue<pair<int,int>> que;
  que.emplace(node,0);
  vector<int> seen(n);
  seen[node]=1;

  while(!que.empty()){
    int now = que.front().first;
    int cost = que.front().second;
    que.pop();

    for(int next:g[now]){
      if(seen[next]) continue;
      diff[node][next] = cost+1;
      que.emplace(next,cost+1);
      seen[next]=1;
    }
  } 
}

int main(){
  int x,y;
  cin >> n >> x >> y;
  g.assign(n,vector<int>());
  x--;
  y--;

  for (int i = 0; i < n-1; i++)
  {
    g[i].push_back(i+1);
    g[i+1].push_back(i);
  }
  g[x].push_back(y);
  g[y].push_back(x);

  const int INF = 1e9;
  vector<vector<int>> diff(n,vector<int>(n,INF));
  for (int i = 0; i < n; i++)
  {
    bfs(i,diff);
  }

  vector<int> anss(n);
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if(diff[i][j]<n) anss[diff[i][j]]++;
    }
  }

  for (int i = 1; i < n; i++)
  {
    cout << anss[i] << endl;
  }  
}