#include <bits/stdc++.h>
using namespace std;

int main(){  
  string s;
  int n;
  cin >> n >> s;

  int lb=0;
  int rw=0;

  for(int i = 0; i < n; i++)
  {
      if(s[i]=='.'){
          rw++;
      }
  }

  int ans=lb+rw;
  for(int i = 0; i < n; i++)
  {
      if(s[i]=='.'){
          rw--;
      }
      else{
          lb++;
      }
      ans=min(ans,lb+rw);
  }
  cout << ans << endl;  
}
