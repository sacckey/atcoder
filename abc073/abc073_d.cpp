#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> p;

void warshall_floyd(int n, vector<vector<int>> &d) {
  for (int k = 0; k < n; k++){
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

void dfs(vector<int> head,vector<int> rest){
  if(rest.size()==0) p.push_back(head);
  else{
    for (int i = 0; i < (int)rest.size(); i++)
    {
      vector<int> restx = rest;
      vector<int> headx = head;
      headx.push_back(rest[i]);
      restx.erase(restx.begin()+i);
      dfs(headx,restx);
    }
  }
}

int main(){
  int n,m,R;
  cin >> n >> m >> R;

  vector<int> r(R);
  for (int i = 0; i < R; i++){
    int ri;
    cin >> ri;
    r[i]=ri-1;
  }
  
  vector<vector<int>> d(n,vector<int>(n,1000000000));
  for (int i = 0; i < m; i++)
  {
    int a,b,c;
    cin >> a >> b >> c;
    d[a-1][b-1] = c;
    d[b-1][a-1] = c;
  }

  warshall_floyd(n,d);

  vector<int> head;
  dfs(head,r);

  int ans = 1000000000;
  for (int i = 0; i < (int)p.size(); i++)
  {
    int sum = 0;
    for (int j = 0; j < R-1; j++)
    {
      int from = p[i][j];
      int to = p[i][(j+1)];
      sum += d[from][to];
    }
    ans = min(ans,sum);
  }

  cout << ans << endl;
}