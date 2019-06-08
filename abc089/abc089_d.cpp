#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,d;
  cin >> h >> w >> d;

  map<int,pair<int,int>> mp;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int a;
      cin >> a;
      mp[a] = make_pair(i,j);
    }    
  }

  vector<int> dis(h*w+5);
  for (int i = 1; i < h*w+5; i++)
  {
    if(i>d){
      dis[i]=dis[i-d]+abs(mp[i].first-mp[i-d].first) + abs(mp[i].second-mp[i-d].second);
    }
  }  

  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int l,r;
    cin >> l >> r;
    int ans = dis[r]-dis[l];
    cout << ans << endl;
  }
}