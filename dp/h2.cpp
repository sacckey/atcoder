#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  const int INF = 1e9 + 7;
  vector<vector<int>> dp(h,vector<int>(w));

  vector<string> a;
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;
    a.push_back(s);
  }
  dp[0][0] = 1;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if(a[i][j]=='.'){
        if(i-1>=0 && a[i-1][j]=='.') dp[i][j] += dp[i-1][j];
        dp[i][j] %= INF;
        if(j-1>=0 && a[i][j-1]=='.') dp[i][j] += dp[i][j-1];
        dp[i][j] %= INF;
      }
    }
  }
  cout << dp[h-1][w-1] << endl;  
}