#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  vector<long long> a(5);
  cin >> n >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  sort(a.begin(),a.end());

  cout << (n+a[0]-1)/a[0] + 4 << endl;
}