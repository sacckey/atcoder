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
  int n = 100000;
  vector<int> p(n,0);
  vector<int> ruiseki(n);
  for (int i = 0; i < n; i++)
  {
    if (is_prime(i)) p[i]++;
  }

  ruiseki[0]=0;
  for (int i = 1; i < n; i++)
  {
    if(p[i]&&p[(i+1)/2]) ruiseki[i]=ruiseki[i-1]+1;
    else ruiseki[i]=ruiseki[i-1];
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int l,r;
    cin >> l >> r;
    cout << ruiseki[r]-ruiseki[l-1] << endl;
  }
}