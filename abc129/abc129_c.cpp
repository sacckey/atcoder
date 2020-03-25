#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n+10,1);
  const long long MOD = 1000000007;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    a[x] = 0;
  }

  vector<long long> dp(n+5);
  dp[0]=1;
  dp[1]=a[1];
  for (int i = 2; i <= n; i++)
  {
    if(a[i]) dp[i] = dp[i-1]+dp[i-2];
    else dp[i]=0;
    dp[i]%=MOD;
  }
  cout << dp[n] << endl;  
}