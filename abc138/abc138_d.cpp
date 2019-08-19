#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<long long> sumx;

void bfs(long long c, vector<long long> &dist){
  queue<pair<int,long long>> que;
  dist[0] = c;
  que.emplace(0,c);

  while(!que.empty()){
    int from = que.front().first;
    c = que.front().second;
    que.pop();

    for(int to:g[from]){
      if(dist[to]==-1){
        que.emplace(to,c+sumx[to]);
        dist[to] = c+sumx[to];
      }
    }   
  }
}

int main(){
  int n,q;
  cin >> n >> q;
  g.assign(n,vector<int>());
  sumx.assign(n,0);

  for (int i = 0; i < n-1; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  for (int i = 0; i < q; i++)
  {
    int p;
    long long x;
    cin >> p >> x;
    p--;
    sumx[p]+=x;
  }

//  cout << "sumx0" << sumx[0] << endl;
  vector<long long> dist(n,-1);
  bfs(sumx[0],dist);
  for(long long dis:dist){
    cout << dis << " ";
  }
  cout << endl;
}