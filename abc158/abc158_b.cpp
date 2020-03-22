#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,a,b;
  cin >> n >> a >> b;

  long long ans = n/(a+b) * a;
  long long c = n%(a+b);

  ans += min(a,c);
  cout << ans << endl;
}