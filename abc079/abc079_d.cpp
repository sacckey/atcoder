#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;

  vector<vector<int>> dist(10,vector<int>(10));
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cin >> dist[i][j];
    }
  }

  for (int k = 0; k < 10; k++)
  {
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
      }
    }
  }

  int ans=0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int a;
      cin >> a;
      if(a!=-1) ans+=dist[a][1];
    }
  }

  cout << ans << endl;
}