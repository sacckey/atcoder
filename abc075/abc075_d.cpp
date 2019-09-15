#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<pair<long long,long long>> xys;
  vector<long long>xs(n),ys(n);

  for (int i = 0; i < n; i++)
  {
    long long x,y;
    cin >> x >> y;
    xys.emplace_back(x,y);
    xs[i]=x;
    ys[i]=y;
  }
  sort(xs.begin(),xs.end());
  sort(ys.begin(),ys.end());

  long long minarea = 4000000000000000010;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = n-1; j > i; j--)
    {
      for (int l = 0; l < n-1; l++)
      {
        for (int m = n-1; m > l; m--)
        {
          long long minx = xs[i];
          long long maxx = xs[j];
          long long miny = ys[l];
          long long maxy = ys[m];
          long long area = (maxx-minx)*(maxy-miny);

          int cnt = 0;
          for(auto xy:xys){
            long long x = xy.first;
            long long y = xy.second;
            if(x>=minx && x<=maxx && y>=miny && y<=maxy) cnt++;
          }
          if(cnt>=k) minarea = min(minarea,area);
        }
      }
    }
  }
  
  cout << minarea << endl;
}