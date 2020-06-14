#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,X,Y;
  cin >> N >> X >> Y;
  map<int,map<int,int>> grid;

  for (int i = 0; i < N; i++)
  {
    int xi,yi;
    cin >> xi >> yi;
    grid[xi][yi] = -1;
  }
  
  queue<pair<int,int>> q;
  q.emplace(0,0);

  int dx[6] = {0,1,1,0,-1,-1};
  int dy[6] = {1,1,0,-1,0,1};

  while(!q.empty()){
    int nowx = q.front().first;
    int nowy = q.front().second;
    int nowcost = grid[nowx][nowy];
    q.pop();

    if(nowx==X && nowy==Y){
      cout << nowcost << endl;
      return 0;
    }

    for (int i = 0; i < 6; i++)
    {
      int nextx = nowx+dx[i];
      int nexty = nowy+dy[i];
      int nextcost = nowcost+1;

      if(grid[nextx][nexty]!=0 || nextx<-201 || nextx>201 || nexty<-201 || nexty>201) continue;
      q.emplace(nextx,nexty);
      grid[nextx][nexty] = nextcost;
    }
  }
  cout << -1 << endl;
}