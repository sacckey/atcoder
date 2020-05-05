#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }

  vector<bool> flgs(n,true);
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    if(h[a]>=h[b]) flgs[b] = false;
    if(h[b]>=h[a]) flgs[a] = false;    
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(flgs[i]){ 
      ans++;
    }
  }
  cout << ans << endl;
}