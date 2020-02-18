#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  bool flg = false;
  if(a==b && b!=c) flg=true;
  if(a==c && b!=c) flg=true;
  if(b==c && a!=c) flg=true;
  
  if(flg) puts("Yes");
  else puts("No");
}