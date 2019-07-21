#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n ;
  vector<int> a(n+1);
  vector<int> b(n+1);


  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }

  for (int i = n/2; i > 0; i--)
  {
    int k=2*i;
    int sum=0;
    while(k<=n){
      sum+=b[k];
      k+=i;
    }
    int bit = sum%2;
    if(bit==a[i]) b[i] = 0;
    else b[i] = 1;
  }

  int m=0;
  vector<int> ans;
  for (int i = 1; i <= n; i++)
  {
    if(b[i]==1){
      m++;
      ans.push_back(i);
    }
  }

  cout << m << endl;
  for (int i = 0; i < (int)ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  
  // for (int i = 0; i < m; i++)
  // {
  //   cout << 1 << " ";
  // }
  cout << "" << endl;
  
}