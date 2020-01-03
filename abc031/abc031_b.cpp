#include <bits/stdc++.h>
using namespace std;

int main(){
  int l,h,n;
  cin >> l >> h >> n;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if(a<l) cout << l - a << endl;
    else if(a<=h) cout << 0 << endl;
    else cout << -1 << endl;
  } 
}