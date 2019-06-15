#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  char s[h][w];
  vector<vector<int>> cost(h,vector<int>(w,-1));
  cost[0][0]=0;
  int black = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> s[i][j];
      if(s[i][j]=='#') black++;
    }
  }

  queue<pair<int,int>> que;
  que.emplace(0,0);
  while(!que.empty()){
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    pair<int,int> p=que.front();
    que.pop();
    for (int i = 0; i < 4; i++)
    {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if(nx>=0 && nx<h && ny>=0 && ny<w && s[nx][ny]=='.' && cost[nx][ny]==-1){
        cost[nx][ny]=cost[p.first][p.second]+1;
        que.emplace(nx,ny);
      }
    }
  }
  if(cost[h-1][w-1]==-1) cout << -1 << endl;
  else cout << h*w-black-cost[h-1][w-1]-1 << endl;  
}