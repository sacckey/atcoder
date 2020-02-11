#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }

  const int INF = 1e9;

  vector<int> dp(n+1,INF);
  dp[0] = 0;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= k; j++)
    {
      if(i-j>=0){
        dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
      }
    }
  }
  cout << dp[n-1] << endl;
}