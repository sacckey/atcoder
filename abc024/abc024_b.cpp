#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = t;
  for (int i = 0; i < n-1; i++)
  {
    ans += min(a[i+1]-a[i],t);
  }
  cout << ans << endl;  
}