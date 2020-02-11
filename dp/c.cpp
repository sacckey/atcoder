#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int act[n][3];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> act[i][j];
    }
  }

  int dp[n+1][3];
  dp[0][0] = dp[0][1] = dp[0][2] = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      dp[i][j] = max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]) + act[i-1][j];
    }
  }

  int ans = max({dp[n][0],dp[n][1],dp[n][2]});
  cout << ans << endl;
}