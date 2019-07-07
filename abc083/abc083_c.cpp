#include <bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;
  cin >> x >> y;

  long long ans=0;
  for (long long i = x; i <= y; i*=2)
  {
    ans++;
  }
  cout << ans << endl;
  
}