#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,l;
  cin >> n >> l;
  map<int,int> h;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    h[x]++;
  }
  int t1,t2,t3;
  cin >> t1 >> t2 >> t3;

  vector<int> dp(l+1, 1000000007);
  dp[0]=0;
  for (int i = 1; i <= l; i++)
  {
    dp[i] = dp[i-1] + t1;
    if(h[i-1]>0) dp[i]+=t3;
    int time;

    if(i>=2){
      time = dp[i-2] + t1 + t2;
      if(h[i-2]>0) time+=t3;
      dp[i] = min(dp[i],time);
    }

    if(i>=4){
      time = dp[i-4] + t1 + t2*3;
      if(h[i-4]>0) time+=t3;
      dp[i] = min(dp[i],time);
    }

    if(i==l){
      if(i>=1){
        time = dp[i-1] + t1/2 + t2/2;
        if(h[i-1]>0) time+=t3;
        dp[i] = min(dp[i],time);
      }
      if(i>=2){
        time = dp[i-2] + t1/2 + t2*3/2;
        if(h[i-2]>0) time+=t3;
        dp[i] = min(dp[i],time);
      }
      if(i>=3){
        time = dp[i-3] + t1/2 + t2*5/2;
        if(h[i-3]>0) time+=t3;
        dp[i] = min(dp[i],time);
      }
    }
  }
  cout << dp[l] << endl;
}