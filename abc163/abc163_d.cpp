#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;

  long long MOD = 1000000007;
  long long ans = 0;
  for (long long i = k; i <= n+1; i++)
  {
    long long l = i*(i-1)/2;
    long long r = i*(2*n-i+1)/2;
    ans += r-l+1;
    ans %= MOD;
  }
  cout << ans << endl;  
}