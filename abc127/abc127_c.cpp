#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  int rmin=1000000,lmax=0;

  for (int i = 0; i < m; i++)
  {
    int l,r;
    cin >> l >> r;
    lmax=max(lmax,l);
    rmin=min(rmin,r);
  }
  cout << max(rmin-lmax+1,0) << endl;
  
}