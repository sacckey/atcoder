#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<double> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  
  double ans=v[0];
  for (int i = 1; i < n; i++)
  {
    ans+=v[i];
    ans/=2.0;
  }

  printf("%.14lf\n",ans);
}