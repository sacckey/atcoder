#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  if(sum%n != 0){
    cout << -1 << endl;
    return 0;
  }
  int ave = sum/n;
  int ans = 0;
  sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    if(sum != (i+1)*ave) ans++;
  }
  cout << ans << endl; 
}