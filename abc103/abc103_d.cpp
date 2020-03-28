#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  vector<pair<int,int>> vec(m);
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;b--;
    vec[i] = make_pair(b,a);
  }
  sort(vec.begin(),vec.end());

  int ans = 0;
  int p = -1;
  for (int i = 0; i < m; i++)
  {
    int a = vec[i].second;
    int b = vec[i].first;
    if(p>=a) continue;
    ans++;
    p=b-1;
  }
  cout << ans << endl;
}