#include <bits/stdc++.h>
using namespace std;

int main(){
  int l1,l2,l3;
  cin >> l1 >> l2 >> l3;

  int ans;
  if(l1==l2) ans=l3;
  else{
    if(l1==l3) ans=l2;
    else ans=l1;
  }
  cout << ans << endl;
}