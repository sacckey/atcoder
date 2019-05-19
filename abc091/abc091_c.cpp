#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<pair<int,int>> r(n);
  vector<pair<int,int>> b(n);

  for (int i = 0; i < n; i++)
  {
    int x,y;
    cin >> x >> y;
    r[i]=make_pair(y,x);
  }
  for (int i = 0; i < n; i++)
  {
    int x,y;
    cin >> x >> y;
    b[i]=make_pair(x,y);
  }

  sort(b.begin(),b.end());
  sort(r.begin(),r.end(),greater<pair<int,int>>());

  int ans=0;
  for (int i = 0; i < n; i++)
  {
    for (auto itr = r.begin(); itr < r.end(); itr++)    
    {
      if(b[i].first>(*itr).second && b[i].second>(*itr).first){
        r.erase(itr);
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
}