#include <bits/stdc++.h>
using namespace std;

long long gcd(long long c,long long d){
  long long r;

  if(c<d) swap(c,d);
 
  r = c % d;
  while(r!=0){
    c = d;
    d = r;
    r = c % d;
  }
  return d;
}

int main(){
  long long a,b,c,d;
  cin >> a >> b >> c >> d;
  
  long long delta = b-a+1;
  long long res=c*d/gcd(c,d);
  long long ans = delta - (b/c - (a-1)/c) - (b/d - (a-1)/d) + (b/res - (a-1)/res);
  cout << ans << endl;
}