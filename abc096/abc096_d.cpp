#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
  if(n==1) return false;

  int m = sqrt(n);
  for (int i = 2; i <= m; i++)
  {
    if(n%i==0) return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n ;
  vector<int> ans;

  for (int i = 2; i <= 55555; i++)
  {
    if(is_prime(i) && i%5==1) ans.push_back(i);
    if((int)ans.size()==n) break;
  }
  for (int i = 0; i < n-1; i++)
  {
    cout << ans[i] << " ";
  }
  cout << ans[n-1] << endl;
}