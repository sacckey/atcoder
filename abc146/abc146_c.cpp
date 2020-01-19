#include <bits/stdc++.h>
using namespace std;

long long a,b,x;

bool check(long long n){
  int dn = to_string(n).size();
  long long p = a*n+b*(long long)dn;
  return x >= p;
}

int main(){
  cin >> a >> b >> x;
  if(!check(1)){
    cout << 0 << endl;
    return 0;
  }
  if(check(1000000000)){
    cout << 1000000000 << endl;
    return 0;
  }

  long long l = 1;
  long long r = 1000000000;
  while(r-l != 1){
    long long mid = (l+r)/2;
    if(check(mid)){
      l=mid;
    }
    else{
      r=mid;
    }
  }

  cout << l << endl;
}