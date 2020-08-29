#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x,k,d;
  cin >> x >> k >> d;

  if(x<0) x*=(-1);

  if(x/d>=k){
    cout << x-d*k << endl;
    return 0;
  }

  k-=x/d;
  x=x%d;
  long long ans;
  if(k%2==0) ans = x;
  else ans = abs(x-d);
  cout << ans << endl;
}