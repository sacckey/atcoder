#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int ans = abs(a-b);
  if(ans>5) cout << 10-ans << endl;
  else cout << ans << endl;
}