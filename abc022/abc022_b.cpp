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
  for(auto x:mp){
    ans+=x.second-1;
  }
  cout << ans << endl;
}