#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,n;
  cin >> a >> b >> n;

  long long ans;
  if(b>n) ans = (a*n)/b;
  else ans = (a*(b-1))/b;
  cout << ans << endl;
}