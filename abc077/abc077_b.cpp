#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int ans=1;
  for (int i = 1; i < n; i++)
  {
    if(i*i>n){
      ans = (i-1)*(i-1);
      break;
    }
  }
  cout << ans << endl;
}