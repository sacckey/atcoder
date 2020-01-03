#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  double ans = (double) n*(n+1)*10000/(2*n);
  printf("%.10lf\n",ans);
}