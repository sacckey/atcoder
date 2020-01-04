#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;
  string s = a+b;
  int ans1 = atoi(s.c_str())*2;
  int ans = 0;
  int d = 1;
  for (int i = s.size()-1; i >= 0; i--)
  {
    ans += d*(s[i]-'0');
    d*=10;
  }
  ans*=2;
  cout << ans1 << endl;
}