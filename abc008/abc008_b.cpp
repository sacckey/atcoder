#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<string,int> mp;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    mp[s]++;
  }
  
  int cnt = 0;
  string ans = "";
  for(auto p:mp){
    if(p.second>cnt){
      ans = p.first;
      cnt = p.second;
    }
  }
  cout << ans << endl;  
}