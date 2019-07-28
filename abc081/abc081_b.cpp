#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  bool is_even = true;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if(a[i]%2==1) is_even=false;
  }

  int ans=0;
  while(is_even){
    for (int i = 0; i < n; i++)
    {
      a[i]/=2;
      if(a[i]%2==1) is_even=false;
    }
    ans++;    
  }

  cout << ans << endl;
}