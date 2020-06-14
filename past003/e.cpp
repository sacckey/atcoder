#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<vector<int>> g(n,vector<int>());

  for (int i = 0; i < m; i++)
  {
    int u,v;
    cin >> u >> v;
    u--;
    v--;

    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<int> c(n);
  for (int i = 0; i < n; i++) cin >> c[i];

  vector<int> anss;
  for (int i = 0; i < q; i++)
  {
    int qi,x;
    cin >> qi >> x;
    x--;
    if(qi==1){
      anss.push_back(c[x]);
      for(int rin: g[x]) c[rin] = c[x];
    }
    else{
      anss.push_back(c[x]);
      int y;
      cin >> y;
      c[x] = y;
    }
  }
  for(int ans:anss) cout << ans << endl;
}