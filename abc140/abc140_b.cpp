#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n),c(n-1);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < n-1; i++) cin >> c[i];

  int ans=0;
  int prev = -10;
  for (int i = 0; i < n; i++)
  {
    ans+=b[a[i]-1];
    if(a[i]-prev == 1) ans+=c[prev-1];
    prev = a[i];
  }
  cout << ans << endl;
  
  
}