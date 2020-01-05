#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  if(b==0 && a==c) puts("?");
  else if(a+b == c) puts("+");
  else if(a-b == c) puts("-");
  else puts("!");
}