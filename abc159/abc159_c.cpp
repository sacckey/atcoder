#include <bits/stdc++.h>
using namespace std;

int main(){
  double l;
  cin >> l;

  double ans = l*l*l;
  ans /= 27.0;
  printf("%.12lf\n",ans);
}