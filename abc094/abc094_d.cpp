#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int maxi=0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    maxi = max(maxi,a[i]);
  }

  int ans=maxi;
  for (int i = 0; i < n; i++)
  {
    if(abs((maxi+1)/2-a[i])<=abs((maxi+1)/2-ans)){
      ans=a[i];
    }
  }
  cout << maxi << " " << ans << endl;
}