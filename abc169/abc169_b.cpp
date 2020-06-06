#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  long long ans = 1;
  vector<long long> as(n);
  for (int i = 0; i < n; i++)
  {
    cin >> as[i];
  }
  sort(as.begin(),as.end());

  if(as[0]==0){
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    if(ans>1000000000000000000/as[i]){
      cout << -1 << endl;
      return 0;
    }
    ans*=as[i];
  }
  cout << ans << endl;
}