#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int p=(s[0]-'0')*10+s[1]-'0';
  int b=(s[2]-'0')*10+s[3]-'0';

  string ans;
  if((p==0 && b==0)) ans="NA";
  else if((p==0 && b>12)) ans="NA";
  else if((p>12 && b==0)) ans="NA";
  else if((p>12 && b>12)) ans="NA";
  else if((p==0 && b<=12)) ans="YYMM";
  else if((p<=12 && b==0)) ans="MMYY";
  else if(p<=12&&b<=12) ans="AMBIGUOUS";
  else if(p>12) ans="YYMM";
  else ans="MMYY";

  cout << ans << endl;
}