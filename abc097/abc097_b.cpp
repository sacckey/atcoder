#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;

  int maxi = 1,ans=1;
  for (int i = 1; i < x; i++)
  {
    for (int j = 2; j < x; j++)
    {
      if(pow(i,j)<=x){
          maxi = pow(i,j);
      }
      else break;
    }
    ans = max(maxi,ans);
  }
  cout << ans << endl;
  
}