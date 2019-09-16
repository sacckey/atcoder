#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();

  bool flg = true;
  for (int i = 0; i < n; i++)
  {
    if(i%2==1){
      if(s[i]=='R') flg=false;
    }
    else{
      if(s[i]=='L') flg=false;
    }
  }
  if(flg) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}