#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;

  if(n%2==1){
    cout << 0 << endl;
    return 0;
  }

  long long ans = 0;
  long long div = 10;
  while(div<=n){
    ans += n/div;
    div *= 5;
  }
  cout << ans << endl;
}