#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long c;
  cin >> n >> c;

  vector<long long> x(n+1);
  vector<long long> v(n+1);

  x[0]=0;
  v[0]=0;
  for (int i = 1; i < n+1; i++)
  {
    cin >> x[i] >> v[i];
  }

  //時計回り→反時計回り
  vector<long long> f(n+1);
  f[0]=0;
  long long dis;
  long long calo=0;
  for (int i = n; i >= 1; i--)
  {
    dis = c-x[i];
    calo += v[i];
    f[i]=calo-dis;
  }

  vector<long long> g(n+1);
  g[0]=0;
  long long maxcal=0;
  for (int i = n; i >= 1; i--)
  {
    g[i]=max(maxcal,f[i]);
    maxcal=g[i];
  }
  long long ans1 = 0;
  long long sumcalr = 0;
  for (int i = 0; i < n; i++)
  {
    sumcalr = v[i]+sumcalr;
    long long res = sumcalr - x[i]*2 + g[i+1];
    ans1 = max(ans1,res);
  }

  //反時計回り→時計回り
  f[0]=0;
  calo=0;
  for (int i = 1; i <= n; i++)
  {
    dis = x[i];
    calo += v[i];
    f[i]=calo-dis;
  }

  maxcal=0;
  for (int i = 1; i <= n; i++)
  {
    g[i]=max(maxcal,f[i]);
    maxcal=g[i];
  }

  long long ans2 = 0;
  sumcalr = 0;
  for (int i = n; i >= 0; i--)
  {
    long long res;
    if (i==0) {
      res = g[n];
    }
    else 
    {    
      sumcalr = v[i]+sumcalr;
      res = sumcalr - (c-x[i])*2 + g[i-1];
    }
    ans2 = max(ans2,res);
  }
  cout << max(ans1,ans2) << endl;
}