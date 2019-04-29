#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,C;
  cin >> N >> C;

  vector<vector<int>> d(C+1,vector<int> (C+1));
  vector<vector<int>> c(N+1,vector<int> (N+1));

  for (int i = 1; i <= C; i++)
  {
    for (int j = 1; j <= C; j++)
    {
      cin >> d[i][j];
    }
  }

  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      cin >> c[i][j];
    }
  }

  vector<vector <int>> cost(3,vector<int> (C+1));  //グループ(0,1,2)のマスの色をCに変えたときのコストを記録
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      int g = (i+j)%3;       //(i,j)が属するグループ
      int color = c[i][j];   //(i,j)の色
      for (int k = 1; k <= C; k++)
      {
        cost[g][k]+=d[color][k];    //(i,j)の色をkに変えたときのコストを取ってきて、グループごとに和で管理
      }      
    }
  }
  
  int ans = 1000000000;
  for (int i = 1; i <= C; i++)
  {
    for (int j = 1; j <= C; j++)
    {
      if (i==j) continue;
      for (int k = 1; k <= C; k++)
      {
        if (i==k||j==k) continue;
        int res = cost[0][i]+cost[1][j]+cost[2][k];
        ans = min(ans,res);
      }
    }
  }
  
  cout << ans << endl;  
}