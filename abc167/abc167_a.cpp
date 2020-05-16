#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;

  int n = s.size();
  bool ok = true;
  for (int i = 0; i < n; i++)
  {
    if(s[i]!=t[i]) ok = false;
  }
  if(ok) puts("Yes");
  else puts("No");
  
}