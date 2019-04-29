#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> dp(n+1,100000);
  dp[0]=0;

  for (int i = 1; i <= n; i++)
  {
    int power = 1;
    while(power<=i){
      dp[i]=min(dp[i],dp[i-power]+1);
      power*=6;
    }
    power=9;
    while(power<=i){
      dp[i]=min(dp[i],dp[i-power]+1);
      power*=9;
    }
  }
  cout << dp[n] << endl;
}