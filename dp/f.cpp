#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;

  int n,m;
  n=s.size(), m=t.size();
  vector<vector<int>> dp(n+1,vector<int>(m+1));

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(s[i-1]==t[j-1]) dp[i][j] = dp[i-1][j-1]+1;
      else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
  }

  string ans = "";
  int i = n, j = m;
  while(i>0 && j>0){
    if(dp[i][j]==dp[i-1][j]) i--;
    else if(dp[i][j]==dp[i][j-1]) j--;
    else {
      ans = s[i-1] + ans;
      i--;
      j--;
    }
  }
  cout << ans << endl;
}