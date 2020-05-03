#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x;
  cin >> x;
  long long m = 100;
  long long ans = 0;
  while(m<x){
    m += m/100;
    ans++;
  }
  cout << ans << endl;
}