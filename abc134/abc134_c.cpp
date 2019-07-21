#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n ;
  vector<int> a(n);
  vector<int> b(n);


  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a.begin(),a.end());
  int maxa=a[n-1];
  int maxb=a[n-2];


  for (int i = 0; i < n; i++)
  {
    if(b[i]==maxa) cout << maxb << endl;
    else cout << maxa << endl;
  }
  
  
  
}