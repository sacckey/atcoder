#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  vector<double> p(n);
  double sum = 0.0;
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    p[i] = (m+1)/2.0;
    if(i<k) sum+=p[i];
  }

  double ans;

  /* 累積和 */
  ans = 0.0;
  vector<double> rui(n+1);
  for (int i = 1; i <= n; i++)
  {
    rui[i] = rui[i-1] + p[i-1];
  }
  for (int i = 0; i <= n-k; i++)
  {
    double sum = rui[i+k]-rui[i];
    ans = max(ans,sum);
  }
  printf("%.10lf\n",ans);

  /* 尺取り */
  // ans = sum;
  // for (int i = 0; i < n-k; i++)
  // {
  //   sum-=p[i];
  //   sum+=p[i+k];
  //   ans = max(ans,sum);
  // }
  // printf("%.10lf\n",ans);
}