#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<long long> a(n);
  vector<long long> b(n);
  vector<long long> c(n);
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a[i]=-tmp;
  }
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < n; i++) cin >> c[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());

  long long ans=0;
  for (int i = 0; i < n; i++)
  {
    auto ita = upper_bound(a.begin(),a.end(),-b[i]);
    auto itc = upper_bound(c.begin(),c.end(),b[i]);
    long long cnta=a.end()-ita;
    long long cntc=c.end()-itc;
    ans+=cnta*cntc;
  }

  cout << ans << endl;
}