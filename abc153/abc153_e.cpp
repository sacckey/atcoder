#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,n;
  cin >> h >> n;

  vector<int> a(n),b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }

  const int INF = 1e9;
  int dp[n+1][10001];
  for (int j = 0; j <= 10000; j++)
  {
    dp[0][j] = INF;
  }
  dp[0][0] = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= 10000; j++)
    {
      if(j-a[i-1]>=0) dp[i][j] = min(dp[i-1][j],dp[i][j-a[i-1]]+b[i-1]);
      else dp[i][j] = dp[i-1][j];
    }
  }
  int ans = INF;
  for (int j = h; j <= 10000;j++)
  {
    ans = min(ans,dp[n][j]);
  }
  
  cout << ans << endl;
}