#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
  long long r,tmp;

  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main(){
  int n,m;
  cin >> n >> m;
  vector<long long> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] /= 2;
  }

  long long l = a[0];
  for (int i = 1; i < n; i++)
  {
    l = l/gcd(l,a[i]) * a[i];
  }

  bool ok = true;
  for(int i=0; i<n; i++){
      if((l/a[i])%2 == 0) ok = false;
  }
  if(ok){
    long long ans = m / l;
    ans = (ans+1) / 2;
    cout << ans << endl;
  }
  else{
      cout << 0 << endl;
  }
}