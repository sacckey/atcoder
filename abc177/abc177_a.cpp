#include <bits/stdc++.h>
using namespace std;

int main(){
  int d,t,s;
  cin >> d >> t >> s;

  if((d+s-1)/s<=t) puts("Yes");
  else puts("No");
}