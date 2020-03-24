#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,k;
  cin >> h >> w >> k;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }

  int ans = 1000000;
  vector<int> id(h);
  for (int bit = 0; bit < (1<<(h-1)); bit++)
  {
    int g = 0;
    for (int i = 0; i < h; i++)
    {
      id[i] = g;
      if(bit&(1<<i)) g++;
    }
    g++;

    vector<vector<int>> c(g,vector<int>(w));
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        c[id[i]][j] += s[i][j]-'0';
      }
    }

    bool ok = true;
    for (int i = 0; i < g; i++)
    {
      for (int j = 0; j < w; j++)
      {
        if(c[i][j]>k) ok=false;
      }
    }
    if(!ok) continue;

    vector<int> now(g);
    int cnt = g-1;
    for (int j = 0; j < w; j++)
    {
      for (int i = 0; i < g; i++)
      {
        now[i] += c[i][j];
        if(now[i]>k) ok = false;
      }
      if(!ok){
        ok=true;
        cnt++;
        now = vector<int>(g);
        for (int i = 0; i < g; i++)
        {
          now[i] = c[i][j];
        }
      }      
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
}