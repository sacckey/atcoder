#include <bits/stdc++.h>
using namespace std;

int main(){
  int d,n;
  cin >> d >> n;
  int s;

  if(d==0)s=1;
  else if(d==1) s=100;
  else s=10000;

  int ans=s*n;
  if(n==100) ans+=s;

  cout << ans << endl;
}