#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin >> N >> W;

  vector<long long> w(N);
  vector<int> v(N);
  for (int i = 0; i < N; i++)
  {
    cin >> w[i] >> v[i];
  }

  const long long INF = 1e12;
  long long dp[N+1][100009];
  for (int j = 0; j <= 100000; j++)
  {
    dp[0][j] = INF;
  }
  dp[0][0] = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= 100000; j++)
    {
      if(j-v[i-1]>=0){
        dp[i][j] = min(dp[i-1][j],dp[i-1][j-v[i-1]]+w[i-1]);
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  int ans = 0;
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= 100000; j++)
    {
      if(dp[i][j]<=W) ans = max(ans,j);
    }
  }
  cout << ans << endl;
}