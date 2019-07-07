#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;

  int ans=0;
  for (int i = 1; i <= n; i++)
  {
    int num=i,sum=0;
    while(num!=0){
      sum+=num%10;
      num/=10;
    }
    if(sum>=a && sum<=b) ans+=i;
  }
  cout << ans << endl;
}