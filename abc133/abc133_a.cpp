#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,d;
  cin >> n >> d;
  set<int> h;

  for (int i = 0; i < 1000; i++)
  {
    h.insert(i*i);
  }
  

  vector<vector<int>> x(n,vector<int> (d));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < d; j++)
    {
      cin >> x[i][j]; 
    }    
  }

  int ans=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      int dis = 0;
      for (int k = 0; k < d; k++)
      {
        dis+=(abs(x[i][k]-x[j][k])) * (abs(x[i][k]-x[j][k]));
      }
      if(h.find(dis)!=h.end()) ans++;
    }
    
  }
    cout << ans << endl;
}