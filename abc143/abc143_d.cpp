#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
  }
  sort(l.begin(),l.end());
  
  int ans = 0;
  for (int i = n-1; i >= 0; i--)
  {
    for (int j = i-1; j >= 0; j--)
    {
      int c = l[i]-l[j];
      int left = upper_bound(l.begin(),l.end(),c) - l.begin();
      int right = j;
      ans += max(0,right-left);
    }
  }
  cout << ans << endl;
}