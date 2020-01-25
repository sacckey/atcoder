#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<vector<int>> cnt(10,vector<int>(10));
  for (int i = 0; i < 10; i++)
  {
    cnt[i][i] = 1;
  }
  if(n<=9){
    cout << n << endl;
    return 0;
  }

  int ans = 9;
  int d = 10;
  for (int i = 10; i <= n; i++)
  {
    if(i/d >= 10) {
      d*=10;
    }
    int h = i/d;
    int t = i%10;
    if(t==0) continue;
    ans+=cnt[t][h] * 2;
    cnt[h][t]++;
    if(h==t) ans++;
  }
  cout << ans << endl;
  
}