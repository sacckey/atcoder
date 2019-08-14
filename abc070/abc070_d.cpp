#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<pair<int,long long>>> graph;
vector<long long> dist;

void bfs(int v,long long c){
  queue<pair<int,long long>> que;
  que.emplace(v,c);
  while(!que.empty()){
    v=que.front().first;
    c=que.front().second;
    que.pop();
    dist[v]=c;
    for(auto e:graph[v]){
      if(dist[e.first]!=-1) continue;
      que.emplace(e.first,e.second+c);
    }
  }
}

int main(){
  cin >> n;
  graph.assign(n,vector<pair<int,long long>>());
  dist.assign(n,-1);

  for (int i = 0; i < n-1; i++)
  {
    int a,b;
    long long c;
    cin >> a >> b >> c;
    a--;b--;
    graph[a].emplace_back(b,c);
    graph[b].emplace_back(a,c);
  }

  int q,k;
  cin >> q >> k;
  bfs(k-1,0);
  for (int i = 0; i < q; i++)
  {
    int x,y;
    cin >> x >> y;
    cout << dist[x-1]+dist[y-1] << endl;
  }
}