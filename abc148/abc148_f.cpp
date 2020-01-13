#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int n,u,v;

void bfs(int start,vector<int> &dist){
  queue<int> que;
  que.push(start);

  while(!que.empty()){
    int c = que.front();
    que.pop();

    for(int next:g[c]){
      if(dist[next]==-1){
        dist[next] = dist[c] + 1;
        que.push(next);
      }
    }
  }
}

int main(){
  cin >> n >> u >> v;
  u--;
  v--;
  g.assign(n,vector<int>());

  for (int i = 0; i < n-1; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  if(g[u].size()==1 && g[u][0]==v){
    cout << 0 << endl;
    return 0;
  }

  vector<int> distt(n,-1),dista(n,-1);
  distt[u]=0,dista[v]=0;
  bfs(u,distt);
  bfs(v,dista);

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(distt[i]<dista[i]) ans = max(ans,dista[i]-1);
  }
  cout << ans << endl;
}