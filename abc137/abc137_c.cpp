#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  map<string,int> mp;
  for(int i=0;i<n;i++){
    string s1;
    cin >> s1;
    sort(s1.begin(),s1.end());
    mp[s1]++;
  }

  long long ans=0;
  for(auto ss:mp){
    long long tmp = ss.second;
    if(tmp >= 2){
      ans+=tmp*(tmp-1)/2;
    }
  }

  cout << ans << endl;
}