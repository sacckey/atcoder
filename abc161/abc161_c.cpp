#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,x;
  cin >> n >> x;

  long long ans1 = n%x;
  long long ans2 = abs(ans1-x);
  cout << min(ans1,ans2) << endl;
}