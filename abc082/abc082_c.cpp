#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int,int> mp;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    mp[a]++;
  }

  int ans = 0;
  for(auto m:mp){
    if(m.first>m.second) ans+=m.second;
    if(m.first<m.second) ans+=m.second-m.first;
  }

  cout << ans << endl;
}