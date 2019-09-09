#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  string s;
  cin >> n >> k >> s;

  char c = s[0];
  bool flg = false;
  int cnt=0;
  for (int i = 1; i < n; i++)
  {
    if(s[i]!=c){
      if(!flg){
        flg=true;
        cnt++;
      }
      s[i]=c;
      flg = true;
    }
    else{
      flg = false;
      if(cnt==k) break;
    }
  }
  
  int ans=0;
  for (int i = 0; i < n-1; i++)
  {
    if(s[i]==s[i+1]) ans++;
  }

  cout << ans << endl;
}