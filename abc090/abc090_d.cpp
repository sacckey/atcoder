#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  long long ans=0;
  if(k==0) ans=(long long) n*n;
  else {
    for (int b = k+1; b <= n; b++)
    {
      int cnt = (n+1)/b*(b-k)+ max(0,(n+1)%b-k);
      ans+=(long long) cnt;
    }
  }
  cout << ans << endl;  
}