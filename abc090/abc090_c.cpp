#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  long long ans;
  if(n==2||m==2) ans=0;
  else ans = (long long) max(1,n-2) * max(1,m-2);

  cout << ans << endl;
}