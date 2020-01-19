#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;

int main(){
  cin >> n;
  g.assign(n,vector<int>());
  vector<pair<int,int>> edges;

  for (int i = 0; i < n-1; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;
    b--;

    g[a].push_back(b);
    g[b].push_back(a);
    edges.emplace_back(a,b);
  }

  map<pair<int,int>,int> colors;
  queue<pair<int,int>> que;
  que.emplace(0,0);
  int maxcolor = 1;
  while(!que.empty()){
    int cur = que.front().first;
    int ngcolor = que.front().second;
    que.pop();

    int color = 1;
    for(int next:g[cur]){
      if(color==ngcolor) color++;

      if(colors[make_pair(cur,next)]==0){
        colors[make_pair(cur,next)]=color;
        colors[make_pair(next,cur)]=color;
        que.emplace(next,color);
        maxcolor = max(maxcolor,color);
        color++;
      }
    }
  }
  cout << maxcolor << endl;

  for(auto p:edges){
    cout << colors[make_pair(p.first,p.second)] << endl;
  }
}