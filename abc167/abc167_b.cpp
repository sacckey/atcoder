#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,k;
  cin >> a >> b >> c >> k;

  int ans = 0;
  ans += min(a,k);
  k-=a;
  if(k>0){
    k-=b;
  }
  if(k>0){
    ans -= min(c,k);
  }
  cout << ans << endl;
}