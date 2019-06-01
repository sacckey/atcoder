#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  vector<pair<int,int>> cb(m);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(),a.end());

  for (int i = 0; i < m; i++)
  {
    int b,c;
    cin >> b >> c;
    cb[i]=make_pair(c,b);
  }
  sort(cb.begin(),cb.end());
  reverse(cb.begin(),cb.end());
  
  int cnt=0;
  int flg=0;
  for (auto cbp:cb)
  {
    int c = cbp.first;
    int b = cbp.second;
    for (int i = cnt; i < n; i++)
    {
      if(c<a[i]){
        flg=1;
        break;
      }
      else{
        a[i]=c;
        b--;
      }
      if(b==0) {
        cnt=i+1;
        break;
      }
    }
    if(flg) break;
  }

  long long ans=0;
  for(auto ai:a){
    ans+=ai;
  }

  cout << ans << endl;
}