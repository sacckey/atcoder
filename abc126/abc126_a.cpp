#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  string s;
  cin >> n >> k >> s;

  if(s[k-1]=='A') s[k-1]='a';
  else if(s[k-1]=='B') s[k-1]='b';
  else s[k-1]='c';

  cout << s << endl;
}