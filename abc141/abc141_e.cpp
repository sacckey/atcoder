#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;

  int dp[n][n];
  for (int i = n-1; i >= 0; i--)
  {
    for (int j = n-1; j >= 0; j--)
    {
      if(s[i]==s[j]){
        if(i==n-1 || j==n-1) dp[i][j]=1;
        else dp[i][j]=dp[i+1][j+1]+1;
      }
      else dp[i][j]=0;
    }
  }
  
  int maxlen=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(i+dp[i][j]<=j){
        maxlen = max(maxlen,dp[i][j]);
      }
    }
  }

  cout << maxlen << endl;  
}