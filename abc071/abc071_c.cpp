#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  
  vector<long long> ans;
  for (int i = 1; i < n; i++)
  {
    if(a[i]==a[i-1]){
      ans.push_back(a[i]);
      i++;
    }
    if(ans.size()==2){
      cout << ans[0]*ans[1] << endl;
      return 0;
    }
  }

  cout << 0 << endl;
}