#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m ;
  
  vector<long long> x(n),y(n),z(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i] >> z[i];
  }

  long long xx,yy,zz;
  long long ans=0;
  for (int i = 0; i < 2; i++)
  {
    if(i) xx=1;
    else xx = -1;
    for (int j = 0; j < 2; j++)
    {
      if(j) yy=1;
      else yy = -1;
      for (int k = 0; k < 2; k++)
      {
        if(k) zz=1;
        else zz = -1;

        vector<long long> anslist(n);
        for (int w = 0; w < n; w++)
        {
          anslist[w]=x[w]*xx+y[w]*yy+z[w]*zz;
        }
        sort(anslist.begin(),anslist.end(),greater<long long>());
        long long anss=0;
        for (int v = 0; v < m; v++)
        {
          anss+=anslist[v];
        }
        ans=max(anss,ans);
      } 
    }
  }
  cout << ans << endl;  
}