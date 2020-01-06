#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;
  int len = s.size();
  bool flg = true;

  for (int i = 0; i < len; i++)
  {
    if(s[i]=='@' && t[i]!='@'){
      if(t[i]!='a' && t[i]!='t' && t[i]!='c' && t[i]!='o' && t[i]!='d' && t[i]!='e' && t[i]!='r'){
        flg = false;
        break;
      }
      else continue;
    }
    if(s[i]!='@' && t[i]=='@'){
      if(s[i]!='a' && s[i]!='t' && s[i]!='c' && s[i]!='o' && s[i]!='d' && s[i]!='e' && s[i]!='r'){
        flg = false;
        break;
      }
      else continue;
    }
    if(s[i]!=t[i]){
      flg = false;
      break;
    }
  }
  if(flg) puts("You can win");
  else puts("You will lose");  
}