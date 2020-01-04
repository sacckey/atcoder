#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  for (int i = 0; i < 12; i++)
  {
    string s;
    cin >> s;
    int n = s.size();
    for (int j = 0; j < n; j++)
    {
      if(s[j]=='r'){
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;  
}