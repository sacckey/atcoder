#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  vector<int> b;
  int prev=a[0];
  int cnt=1;
  for (int i = 1; i < n; i++)
  {
    if(a[i]!=prev){
      prev=a[i];
      b.push_back(cnt);
      cnt=1;
    }
    else cnt++;
  }
  b.push_back(cnt);
  sort(b.begin(),b.end());

  int m=b.size()-k;
  int ans=0;
  for (int i = 0; i < m; i++)
  {
    ans+=b[i];
  }

  cout << ans << endl;
}