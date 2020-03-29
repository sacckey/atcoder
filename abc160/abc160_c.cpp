#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,n;
  cin >> k >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 1e9;
  for (int i = 0; i < n; i++)
  {
    int s = a[i];
    int g = a[(i+n-1)%n];
    if(g<s) g+=k;
    ans = min(ans,g-s);
  }
  cout << ans << endl;
}