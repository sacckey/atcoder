#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int>w(n);
  for (int i = 0; i < n; i++)
  {
    cin >> w[i];
  }

  int ans = 1000000000;
  for (int i = 0; i < n-1; i++)
  {
    int sum1=0,sum2=0;
    for (int k = 0; k <= i; k++)
    {
      sum1+=w[k];
    }
    for (int j = i+1; j < n; j++)
    {
      sum2+=w[j];
    }
    ans = min(ans,abs(sum1-sum2));
  }
  cout << ans << endl;
}