#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  char abc[3] = {'a','b','c'};

  if((n-1)%2 != 0 || s[n/2] != 'b'){
    cout << -1 << endl;
    return 0;
  }

  bool flg = true;
  for (int i = 0; i < n-1; i++)
  {
    if(!((s[i]=='a' && s[i+1]=='b') ||  (s[i]=='b' && s[i+1]=='c') || (s[i]=='c' && s[i+1]=='a'))) flg = false;
  }

  if(flg) cout << (n-1)/2 << endl;
  else cout << -1 << endl;  
}