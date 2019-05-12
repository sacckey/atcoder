#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int ans = 0;
  int ba = 0;
  int b = 0;
  int a = 0;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < s.size()-1; j++)
    {
      if(s[j]=='A'&&s[j+1]=='B') ans++;
    }

    if(s[0]=='B') b++;
    if (s[s.size()-1]=='A') a++;    
  }

  ans += min(a,b);
  cout << ans << endl; 
}