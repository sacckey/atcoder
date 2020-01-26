#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;

  char prev = s[0];
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if(s[i]!=prev){
      prev=s[i];
      ans++;
    }
  }
  cout << ans << endl;
}