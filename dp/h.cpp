#include <bits/stdc++.h>
using namespace std;

int h,w;
const int INF = 1e9 + 7;
vector<string> a;
vector<vector<int>> dp;

int rec(int i,int j){
  if(dp[i][j]!=-1) return dp[i][j];
  if(a[i][j]=='#' || i>=h || j>=w) return 0;
  if(a[i+1][j]=='.' && a[i][j+1]=='.') return dp[i][j] = ((rec(i+1,j) + rec(i,j+1)))%INF;
  return dp[i][j] = max(rec(i+1,j),rec(i,j+1));
}


int main(){
  cin >> h >> w;
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;
    s+="#";
    a.push_back(s);
  }
  a.push_back(string(w,'#'));
  dp.assign(h+1,vector<int>(w+1,-1));
  dp[h-1][w-1]=1;
  rec(0,0);
  cout << dp[0][0] << endl;
}