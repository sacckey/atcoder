#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    ans+=min(x,k-x);
  }

  cout << ans*2 << endl;  
}