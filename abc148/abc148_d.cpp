#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  int cnt = 1;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if(a!=cnt) ans++;
    else cnt++;
  }
  if(ans==n) cout << -1 << endl;
  else cout << ans << endl;
}