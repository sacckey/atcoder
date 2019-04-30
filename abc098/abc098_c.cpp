#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  
  int cnt=0;
  for (int i = 1; i < n; i++)
  {
    if(s[i]=='E') cnt++;
  }

  int ans=cnt;
  for (int i = 1; i < n; i++)
  {
    if(s[i]=='E') cnt--;
    if(s[i-1]=='W') cnt++;
    ans = min(ans,cnt);
  }
  
  cout << ans << endl;
}