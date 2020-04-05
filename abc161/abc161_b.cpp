#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  int sum=0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum+=a[i];
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());

  if(a[m-1] >= (sum+4*m-1)/(4*m)) puts("Yes");
  else puts("No");

  
  
}