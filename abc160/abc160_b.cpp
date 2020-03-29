#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;

  int ans = 0;
  ans+=x/500 * 1000;
  x%=500;
  ans+=x/5 * 5;
  cout << ans << endl;
}