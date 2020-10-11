#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> steps;
  for (int i = 0; i < k; i++)
  {
    int l,r;
    cin >> l >> r;
    l--;
    r--;
    for (int left = l; left <= r; left++)
    {
      steps.push_back(left);
    }
  }

  

  vector<int> dp(n+10);
  dp[0]=1;
  for (int i = 1; i < n; i++)
  {
    
  }
  
  
}