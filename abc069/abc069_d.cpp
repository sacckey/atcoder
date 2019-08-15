#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,n;
  cin >> h >> w >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int cnth = 0;
  int cntw = 0;
  string tmp = "";
  vector<vector<int>> anss(h,vector<int>());
  for (int i = 0; i < n; i++)
  {
    int ai = a[i];
    for (int j = 0; j < ai; j++)
    {
      anss[cnth].push_back(i+1);
      cntw++;
      if(cntw%w==0){
        cnth++;
        tmp="";
      }
    }
  }
  for (int i = 0; i < h; i++)
  {
    if (i%2==1) reverse(anss[i].begin(),anss[i].end());
    for (int j = 0; j < w; j++)
    {
      cout << anss[i][j] << " ";
    }
    cout << endl;
  }  
}