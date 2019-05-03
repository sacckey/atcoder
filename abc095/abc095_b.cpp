#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;

  int minm=1000;
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    x-=m;
    minm=min(minm,m);
  }
  int ans = n + x/minm;
  cout << ans << endl;
  
}