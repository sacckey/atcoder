#include <bits/stdc++.h>
using namespace std;

int main(){
  int p,q,r;
  cin >> p >> q >> r;
  int ans = p+q+r - max({p,q,r});
  cout << ans << endl;
}