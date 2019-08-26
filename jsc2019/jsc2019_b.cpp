#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long ans=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if(a[i]>a[j]){
        ans+=k;
        ans%=1000000007;
      }
    }
  }

  int cnt=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(a[i]>a[j])cnt++;
    }
  }
  ans+=k*(k-1)/2 % 1000000007 * (long long)cnt;
  ans%=1000000007;
  cout << ans << endl;
}