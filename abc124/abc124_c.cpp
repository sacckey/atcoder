#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int ans = 0;

  for(int i = 0; i < s.size()-1; i++)
  {
    if(s[i]==s[i+1]){
        if(s[i]=='0') s[i+1] = '1';
        else s[i+1] = '0';
        ans++;
    }
  }
  cout << ans << endl;
  
}