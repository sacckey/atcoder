#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<string,int> mp;
  int maxcnt = 0;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    mp[s]++;
    maxcnt = max(maxcnt,mp[s]);
  }

  vector<string> anss;
  for(auto x:mp){
    if(x.second==maxcnt){
      anss.push_back(x.first);
    }
  }
  sort(anss.begin(),anss.end());
  for(string ans:anss){
    cout << ans << endl;
  }
}