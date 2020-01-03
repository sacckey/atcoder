#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  double c = m*6.0;
  double t = n%12*30 + m/2.0;

  double ans = max(c,t) - min(c,t);
  if(ans>180.0) ans = 360.0-ans;
  printf("%.10lf\n",ans);
}