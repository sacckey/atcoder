#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;

vector<int> bfs(int to, vector<int> dist){
  queue<pair<int,int>> que;
  int c = 0;
  que.emplace(to,c);

  while(!que.empty()){
    to = que.front().first;
    c = que.front().second;
    que.pop();
    dist[to] = c;

    for(auto v:g[to]){
      if(dist[v]==-1){
        que.emplace(v,c+1);
      }
    }   
  }
  return dist;
}

int main(){
  cin >> n;
  g.assign(n,vector<int>());

  for (int i = 0; i < n-1; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> from1(n,-1);
  vector<int> fromn(n,-1);

  from1 = bfs(0,from1);
  fromn = bfs(n-1,fromn);

  int fenn = 0;
  int sunu = 0;
  for (int i = 1; i < n-1; i++)
  {
    if(from1[i]<=fromn[i]) fenn++;
    else sunu++;
  }
  if(fenn>sunu) cout << "Fennec" << endl;
  else cout << "Snuke" << endl;
}