#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();

  vector<int> ans(n,1);
  for (int j = 0; j < 2; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if(s[i]=='R' && s[i+1]=='R'){
        ans[i+2]+=ans[i];
        ans[i]=0;
      }
    }
    reverse(s.begin(),s.end());
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < n; i++)
    {
      if(s[i]=='L') s[i]='R';
      else s[i]='L';
    }
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}