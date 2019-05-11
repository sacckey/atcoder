#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  queue<pair<int,int>> q;

  vector<vector<char>> a(h,vector<char> (w));
  vector<vector<int>> cost(h,vector<int> (w,-1));

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
      if(a[i][j]=='#') {
        cost[i][j]=0;
        q.emplace(i,j);
      }
    }
  }

  int dx[4] = {0,0,1,-1};
  int dy[4] = {1,-1,0,0};
  int ans = 0;
  while(!q.empty()){
    pair<int,int> p = q.front();
    int y = p.first;
    int x = p.second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      if(x+dx[i]<w && x+dx[i]>=0 && y+dy[i]< h && y+dy[i]>=0 && cost[y+dy[i]][x+dx[i]]==-1){
        cost[y+dy[i]][x+dx[i]] = cost[y][x] + 1;
        q.emplace(y+dy[i],x+dx[i]);
        ans = max(ans,cost[y+dy[i]][x+dx[i]]);
      }
    }
  }
    cout << ans << endl;
}