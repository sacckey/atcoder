#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,x;
  cin >> n >> m >> x;

  vector<int> c(n);
  vector<vector<int>> a(n,vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }    
  }

  int ans = 1000000000;
  for (int bit = 0; bit < (1<<n); bit++)
  {
    vector<int> summ(m);
    int costs = 0;
    for (int i = 0; i < n; i++)
    {
      if((1<<i)&bit){
        costs+=c[i];
        for (int j = 0; j < m; j++)
        {
          summ[j] += a[i][j];
        }
      }
    }
    bool ok = true;
    for (int i = 0; i < m; i++)
    {
      if(summ[i]<x) ok = false;
    }
    if(ok) ans = min(ans,costs);
  }
  if(ans==1000000000) cout << -1 << endl;
  else cout << ans << endl;
}