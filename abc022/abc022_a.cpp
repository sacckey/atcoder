#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,s,t;
  cin >> n >> s >> t;

  int sum = 0, ans = 0;
  for (int i = 0; i < n ; i++)
  {
    int w;
    cin >> w;
    sum += w;
    if(sum>=s && sum<=t) ans++;
  }
  cout << ans << endl;  
}