#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  int ans = 1e9;
  for (int i = 1; i <= 100; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += (x[j]-i)*(x[j]-i);
    }
    ans = min(ans,sum);
  }
  cout << ans << endl;
}