#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,x;
  cin >> n >> m >> x;

  int ans0 = 0;
  int ansn = 0;
  for (int i = 0; i < m; i++)
  {
    int a;
    cin >> a;
    if (a<x) ans0++;
    else ansn ++;  
  }

  cout << min(ans0,ansn) << endl;
  
}