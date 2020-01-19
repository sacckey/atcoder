#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<pair<long,long>> vec;
  for (int i = 0; i < n; i++)
  {
    long long x,l;
    cin >> x >> l;
    vec.emplace_back(x+l,x-l);
  }  
  sort(vec.begin(),vec.end());

  long long minr = -1e10;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    long long l,r;
    r = vec[i].first;
    l = vec[i].second;
    if(l < minr) continue;
    minr=r;
    ans++;
  }
  cout << ans << endl;
}