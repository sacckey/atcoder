#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> r(n);
  for (int i = 0; i < n; i++)
  {
    cin >> r[i];
  }
  sort(r.begin(),r.end());
  reverse(r.begin(),r.end());

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if(i%2==0) sum+=r[i]*r[i];
    else sum-=r[i]*r[i];
  }
  double ans = sum*M_PI;
  printf("%.10lf\n",ans);
}