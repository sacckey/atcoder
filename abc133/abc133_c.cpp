#include <bits/stdc++.h>
using namespace std;
int main(){
  long long l,r;
  cin >> l >> r;

  long long ans=2020;
  int flg = 0;
  for (long long i = l; i < r; i++)
  {
    for (long long j = l+1; j <= r; j++)
    {
      long long res = i*j;
      ans=min(ans,res%2019);
      if(ans==0){
        flg=1;
        break;
      }
    }
    if(flg) break;
  }
  cout << ans << endl;
}