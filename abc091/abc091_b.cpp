#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  cin >> m;
  vector<string> t(m);
  for (int i = 0; i < m; i++)
  {
    cin >> t[i];
  }

  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(s[i]==s[j]) cnt++;
    }
    for (int k = 0; k < m; k++)
    {
      if(s[i]==t[k]) cnt--;
    }
    ans = max(ans,cnt);
    cnt = 0;
  }
  
  cout << ans << endl;
}