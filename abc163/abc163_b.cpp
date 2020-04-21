#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    int a;
    cin >> a;
    sum+=a;
  }

  if(sum>n) cout << -1 << endl;
  else cout << n-sum << endl;
  
}