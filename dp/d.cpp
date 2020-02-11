#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin >> N >> W;

  vector<int> w(N);
  vector<long long> v(N);
  for (int i = 0; i < N; i++)
  {
    cin >> w[i] >> v[i];
  }

  vector<vector<long long>> dp(N+1, vector<long long>(W+1));
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if(j-w[i-1]>=0) dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
      else dp[i][j] = dp[i-1][j];
    }
  }
  cout << dp[N][W] << endl;
}