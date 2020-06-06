#include <bits/stdc++.h>
using namespace std;

int main(){
  long double a;
  long double b;
  cin >> a >> b;

  long double ans = a*b;
  long long anss = floorl(ans);
  cout << anss << endl;
}