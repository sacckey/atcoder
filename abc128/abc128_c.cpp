#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  vector<vector<int>> ks(m,vector<int>(n,-1));
  vector<int> kk(m);
  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++)
    {
      cin >> ks[i][j];
      ks[i][j]--;
    }
  }

  vector<int> p(m);
  for (int i = 0; i < m; i++)
  {
    cin >> p[i];
  }

  // for (int i = 0; i < m; i++)
  // {
  //   for (int j = 0; j < ks[i].size(); j++)
  //   {
  //     cout << ks[i][j];
  //   }
  //   cout << endl;
    
  // }
  

  int ans = 0;
  for (int bit = 0; bit < (1<<n); bit++)
  {
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) {
        mp[i]=1;
      }
      else mp[i]=0;
    }

    for (int i = 0; i < m; i++)
    {
      int cnt = 0;
      for (int j = 0; j < n; j++)
      {
        cnt+=mp[ks[i][j]];
      }
      if (!(cnt%2==p[i])) break;
      if (i==m-1) ans++;
    }    
  }
  cout << ans << endl;
}