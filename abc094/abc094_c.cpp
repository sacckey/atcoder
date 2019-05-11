#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> x(n);
  vector<int> y(n);

  for (int i = 0; i < n; i++)
  {
      cin >> x[i];
      y[i] = x[i];
  }

  sort(x.begin(),x.end());
  int ans1 = x[n/2-1];
  int ans2 = x[n/2];

  for (int i = 0; i < n; i++)
  {
    if(y[i]<=ans1) cout << ans2 << endl;
    else cout << ans1 << endl;
  }  
}