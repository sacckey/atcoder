#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,k;
  cin >> a >> b >> c >> k;

  int ans=max({a,b,c});
  int sum=a+b+c-ans;

  for (int i = 0; i < k; i++)
  {
    ans*=2;
  }
  ans+=sum;

  cout << ans << endl;
  
}