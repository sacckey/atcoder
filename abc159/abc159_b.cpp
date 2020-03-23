#include <bits/stdc++.h>
using namespace std;

bool f(string s){
  int n = s.size();
  bool ans = true;
  for (int i = 0; i < n/2; i++)
  {
    if(s[i]!=s[n-1-i]) ans = false;
  }
  return ans;
}

int main(){
  string s;
  cin >> s;
  int n = s.size();

  string s1=s.substr(0,n/2);
  string s2=s.substr(n/2+1,n/2);

  if(f(s)&&f(s1)&&f(s2)) puts("Yes");
  else puts("No");  
}