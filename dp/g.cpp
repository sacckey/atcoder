#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> dp;

int rec(int node){
  if(dp[node]!=-1) return dp[node];
  if(g[node].size()==0) return 0;
  int maxdis = -1;
  for(int next:g[node]){
    maxdis = max(maxdis,rec(next)+1);
  }
  return dp[node] = maxdis;
}

int main(){
  int n,m;
  cin >> n >> m;

  g.assign(n,vector<int>());
  dp.assign(n,-1);

  for (int i = 0; i < m; i++)
  {
    int x,y;
    cin >> x >> y;
    x--,y--;
    g[x].push_back(y);
  }

  for (int i = 0; i < n; i++)
  {
    rec(i);
  }

  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans,dp[i]);
  }
  cout << ans << endl;  
}