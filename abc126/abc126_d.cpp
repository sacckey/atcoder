#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> ans;
vector<vector<pair<int,int>>> graph;

void bfs(int v,int c){
  queue<pair<int,int>> que;
  que.push(make_pair(v,c));
  while(!que.empty()){
    v=que.front().first;
    c=que.front().second;
    que.pop();
    ans[v]=c;
    for(auto e:graph[v]){
      if(ans[e.first]!=-1) continue;
      if(e.second%2==0) que.emplace(e.first,c);
      else que.emplace(e.first,1-c);
    }
  }
}

int main(){
  cin >> n;
  ans.assign(n+1,-1);
  graph.assign(n+1,vector<pair<int,int>>());

  for (int i = 0; i < n-1; i++)
  {
    int u,v,w;
    cin >> u >> v >> w;
    graph[u].push_back(make_pair(v,w));
    graph[v].push_back(make_pair(u,w));
  }
  bfs(1,0);

  for (int i = 1; i <= n; i++)
  {
    cout << ans[i] << endl;
  }
  
}