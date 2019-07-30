#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector <int>> f(n,vector<int> (10));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 10; j++)
    {
      cin >> f[i][j];
    }
  }
  vector<vector <int>> p(n,vector<int> (11));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 11; j++)
    {
      cin >> p[i][j];
    }
  }

  int ans = -1000000007;
  for (int bit = 1; bit < (1<<10); bit++)
  {
    vector<int> vec(n,0);
    int res=0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if((bit & (1<<j)) && f[i][j]) vec[i]++;
      }
    }

    for (int i = 0; i < n; i++)
    {
      res+=p[i][vec[i]];
    }
    ans = max(ans,res);
  }

  cout << ans << endl;
}