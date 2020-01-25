#include <bits/stdc++.h>
using namespace std;

int main(){
  double a,b,x;
  cin >> a >> b >> x;

  double s = x/a;
  double ans;
  if(s>a*b/2){
    double h = 2.0*(a*b-s)/a;
    ans = atan(h/a);
  }
  else{
    double w = 2.0*s/b;
    ans = atan(b/w);
  }
  ans *= 180.0/M_PI;
  printf("%.10lf\n",ans);
}