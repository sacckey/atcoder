#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<long long,long long>> xy(n);

  for (int i = 0; i < n; i++)
  {
    long long x,y;
    cin >> x >> y;
    xy[i]=make_pair(x,y);
  }
  sort(xy.begin(),xy.end());

  map<pair<long long,long long>,int> mp;

  for (int i = 0; i < n-1; i++)
  {
    for (int j = 1; j < n-i; j++)
    {
      long long dx = xy[i+j].first-xy[i].first;
      long long dy = xy[i+j].second-xy[i].second;
      mp[make_pair(dx,dy)]++;
    }
  }

  int maxd = 0;
  for(auto s:mp){
    maxd=max(maxd,s.second);
  }
  
  cout << n-maxd << endl;

}