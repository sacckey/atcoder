#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  bool ok = true;

  if(s[0]!='A') ok = false;
  int count = 0;
  for (int i = 2; i < n-1; i++)
  {
    if(s[i]=='C') count++;
  }
  if(count!=1) ok = false;

  for (int i = 0; i < n; i++)
  {
    if(s[i]<'a' && s[i]!='A' && s[i]!='C') ok = false;
  }

  if(ok) puts("AC");
  else puts("WA");
}